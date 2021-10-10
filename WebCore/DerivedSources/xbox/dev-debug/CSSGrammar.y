%{

/*
 *  Copyright (C) 2002-2003 Lars Knoll (knoll@kde.org)
 *  Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009, 2010 Apple Inc. All rights reserved.
 *  Copyright (C) 2006 Alexey Proskuryakov (ap@nypop.com)
 *  Copyright (C) 2008 Eric Seidel <eric@webkit.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "config.h"

#include "CSSParser.h"
#include "CSSParserMode.h"
#include "CSSPrimitiveValue.h"
#include "CSSPropertyNames.h"
#include "CSSSelector.h"
#include "CSSSelectorList.h"
#include "Document.h"
#include "HTMLNames.h"
#include "MediaList.h"
#include "MediaQueryExp.h"
#include "StyleRule.h"
#include "StyleSheetContents.h"
#include "CSSKeyframeRule.h"
#include "CSSKeyframesRule.h"
#include <wtf/FastMalloc.h>
#include <stdlib.h>
#include <string.h>

using namespace WebCore;
using namespace HTMLNames;

#define YYMALLOC fastMalloc
#define YYFREE fastFree

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 10000
#define YYDEBUG 0

#if YYDEBUG > 0
#include <wtf/text/CString.h>
#define YYPRINT(File,Type,Value) if (isCSSTokenAString(Type)) YYFPRINTF(File, "%s", String((Value).string).utf8().data())
#endif

%}
%pure-parser
%parse-param { CSSParser* parser }
%lex-param { CSSParser* parser }
%union {
    double number;
    CSSParserString string;
    CSSSelector::MarginBoxType marginBox;
    CSSParserValue value;
}
%{
static inline int cssyyerror(void*, const char*)
{
    return 1;
}
static inline CSSParserValue makeIdentValue(CSSParserString string)
{
    CSSParserValue v;
    v.id = cssValueKeywordID(string);
    v.unit = CSSPrimitiveValue::CSS_IDENT;
    v.string = string;
    return v;
}
static bool selectorListDoesNotMatchAnyPseudoElement(const Vector<std::unique_ptr<CSSParserSelector>>* selectorVector)
{
    if (!selectorVector)
        return true;
    for (unsigned i = 0; i < selectorVector->size(); ++i) {
        for (const CSSParserSelector* selector = selectorVector->at(i).get(); selector; selector = selector->tagHistory()) {
            if (selector->matchesPseudoElement())
                return false;
        }
    }
    return true;
}
EA_WEBKIT_CSS_GRAMMAR_START();
%}
%expect 32
%nonassoc LOWEST_PREC
%left UNIMPORTANT_TOK
%token WHITESPACE SGML_CD
%token TOKEN_EOF 0
%token INCLUDES
%token DASHMATCH
%token BEGINSWITH
%token ENDSWITH
%token CONTAINS
%token <string> STRING
%right <string> IDENT
%token <string> NTH
%token <string> NTHCHILDSELECTORSEPARATOR
%nonassoc <string> HEX
%nonassoc <string> IDSEL
%nonassoc ':'
%nonassoc '.'
%nonassoc '['
%nonassoc <string> '*'
%nonassoc error
%left '|'
%token IMPORT_SYM
%token PAGE_SYM
%token MEDIA_SYM
%token FONT_FACE_SYM
%token CHARSET_SYM
%token KEYFRAME_RULE_SYM
%token KEYFRAMES_SYM
%token NAMESPACE_SYM
%token WEBKIT_RULE_SYM
%token WEBKIT_DECLS_SYM
%token WEBKIT_VALUE_SYM
%token WEBKIT_MEDIAQUERY_SYM
%token WEBKIT_SIZESATTR_SYM
%token WEBKIT_SELECTOR_SYM
%token WEBKIT_REGION_RULE_SYM
%token WEBKIT_VIEWPORT_RULE_SYM
%token <marginBox> TOPLEFTCORNER_SYM
%token <marginBox> TOPLEFT_SYM
%token <marginBox> TOPCENTER_SYM
%token <marginBox> TOPRIGHT_SYM
%token <marginBox> TOPRIGHTCORNER_SYM
%token <marginBox> BOTTOMLEFTCORNER_SYM
%token <marginBox> BOTTOMLEFT_SYM
%token <marginBox> BOTTOMCENTER_SYM
%token <marginBox> BOTTOMRIGHT_SYM
%token <marginBox> BOTTOMRIGHTCORNER_SYM
%token <marginBox> LEFTTOP_SYM
%token <marginBox> LEFTMIDDLE_SYM
%token <marginBox> LEFTBOTTOM_SYM
%token <marginBox> RIGHTTOP_SYM
%token <marginBox> RIGHTMIDDLE_SYM
%token <marginBox> RIGHTBOTTOM_SYM
%token ATKEYWORD
%token IMPORTANT_SYM
%token MEDIA_ONLY
%token MEDIA_NOT
%token MEDIA_AND
%token <number> REMS
%token <number> CHS
%token <number> QEMS
%token <number> EMS
%token <number> EXS
%token <number> PXS
%token <number> CMS
%token <number> MMS
%token <number> INS
%token <number> PTS
%token <number> PCS
%token <number> DEGS
%token <number> RADS
%token <number> GRADS
%token <number> TURNS
%token <number> MSECS
%token <number> SECS
%token <number> HERTZ
%token <number> KHERTZ
%token <string> DIMEN
%token <string> INVALIDDIMEN
%token <number> PERCENTAGE
%token <number> FLOATTOKEN
%token <number> INTEGER
%token <number> VW
%token <number> VH
%token <number> VMIN
%token <number> VMAX
%token <number> DPPX
%token <number> DPI
%token <number> DPCM
%token <number> FR
%token <string> URI
%token <string> FUNCTION
%token <string> ANYFUNCTION
%token <string> NOTFUNCTION
%token <string> CALCFUNCTION
%token <string> MATCHESFUNCTION
%token <string> MAXFUNCTION
%token <string> MINFUNCTION
%token <string> NTHCHILDFUNCTIONS
%token <string> LANGFUNCTION
%token <string> DIRFUNCTION
%token <string> ROLEFUNCTION
%token <string> UNICODERANGE
%union { CSSParserSelectorCombinator relation; }
%type <relation> combinator
%union { StyleRuleBase* rule; }
%type <rule> block_rule block_valid_rule font_face import keyframes media page region rule ruleset valid_rule
%destructor { if ($$) $$->deref(); } block_rule block_valid_rule font_face import keyframes media page region rule ruleset valid_rule
%union { Vector<RefPtr<StyleRuleBase>>* ruleList; }
%type <ruleList> block_rule_list block_valid_rule_list
%destructor { delete $$; } block_rule_list block_valid_rule_list
%type <string> ident_or_string maybe_ns_prefix namespace_selector string_or_uri
%type <marginBox> margin_sym
%union { MediaQuerySet* mediaList; }
%type <mediaList> media_list maybe_media_list
%destructor { if ($$) $$->deref(); } media_list maybe_media_list
%union { MediaQuery* mediaQuery; }
%type <mediaQuery> media_query
%destructor { delete $$; } media_query
%union { MediaQuery::Restrictor mediaQueryRestrictor; }
%type <mediaQueryRestrictor> maybe_media_restrictor
%union { MediaQueryExp* mediaQueryExp; }
%type <mediaQueryExp> media_query_exp base_media_query_exp
%destructor { delete $$; } media_query_exp base_media_query_exp
%union { Vector<CSSParser::SourceSize>* sourceSizeList; }
%type <sourceSizeList> source_size_list
%destructor { delete $$; } source_size_list
%type <mediaQueryExp> maybe_source_media_query_exp
%destructor { delete $$; } maybe_source_media_query_exp
%type <value> source_size_length
%destructor { destroy($$); } source_size_length
%union { Vector<std::unique_ptr<MediaQueryExp>>* mediaQueryExpList; }
%type <mediaQueryExpList> media_query_exp_list maybe_and_media_query_exp_list
%destructor { delete $$; } media_query_exp_list maybe_and_media_query_exp_list
%type <string> keyframe_name
%union { StyleKeyframe* keyframe; }
%type <keyframe> keyframe_rule
%destructor { if ($$) $$->deref(); } keyframe_rule
%union { Vector<RefPtr<StyleKeyframe>>* keyframeRuleList; }
%type <keyframeRuleList> keyframes_rule
%destructor { delete $$; } keyframes_rule
%type <value> calc_func_term key unary_term
%type <value> calc_function function min_or_max_function term
%destructor { destroy($$); } calc_function function min_or_max_function term
%union { CSSPropertyID id; }
%type <id> property
%union { CSSParserSelector* selector; }
%type <selector> attrib class page_selector pseudo pseudo_page complex_selector complex_selector_with_trailing_whitespace compound_selector specifier specifier_list
%destructor { delete $$; } attrib class page_selector pseudo pseudo_page complex_selector complex_selector_with_trailing_whitespace compound_selector specifier specifier_list
%union { Vector<std::unique_ptr<CSSParserSelector>>* selectorList; }
%type <selectorList> selector_list nested_selector_list simple_selector_list nth_selector_ending
%destructor { delete $$; } selector_list nested_selector_list simple_selector_list
%destructor { delete $$; } nth_selector_ending
%union { bool boolean; }
%type <boolean> attrib_flags declaration declaration_list decl_list priority
%union { CSSSelector::Match match; }
%type <match> match
%union { int integer; }
%type <integer> unary_operator maybe_unary_operator
%union { char character; }
%type <character> operator calc_func_operator
%union { CSSParserValueList* valueList; }
%type <valueList> calc_func_expr calc_func_expr_list calc_func_paren_expr expr key_list maybe_media_value valid_calc_func_expr valid_expr
%destructor { delete $$; } calc_func_expr calc_func_expr_list calc_func_paren_expr expr key_list maybe_media_value valid_calc_func_expr valid_expr
%type <string> lang_range
%union { Vector<CSSParserString>* stringList; }
%type <stringList> comma_separated_lang_ranges
%destructor { delete $$; } comma_separated_lang_ranges
%type <string> min_or_max
%type <string> element_name
%union { CSSParser::Location location; }
%type <location> error_location
%type <valueList> ident_list
%destructor { delete $$; } ident_list
%type <value> track_names_list
%destructor { destroy($$); } track_names_list
%token SUPPORTS_AND
%token SUPPORTS_NOT
%token SUPPORTS_OR
%token SUPPORTS_SYM
%token WEBKIT_SUPPORTS_CONDITION_SYM
%type <rule> supports
%destructor { if ($$) $$->deref(); } supports
%type <boolean> supports_condition supports_condition_in_parens supports_conjunction supports_declaration_condition supports_disjunction supports_error supports_negation
%token <string> CUEFUNCTION
%%
stylesheet:
    maybe_space maybe_charset maybe_sgml rule_list
  | webkit_rule maybe_space
  | webkit_decls maybe_space
  | webkit_value maybe_space
  | webkit_mediaquery maybe_space
  | webkit_source_size_list maybe_space
  | webkit_selector maybe_space
  | webkit_keyframe_rule maybe_space
  | webkit_supports_condition maybe_space
  ;
webkit_rule: WEBKIT_RULE_SYM '{' maybe_space valid_rule maybe_space '}' { parser->m_rule = adoptRef($4); } ;
webkit_keyframe_rule: KEYFRAME_RULE_SYM '{' maybe_space keyframe_rule maybe_space '}' { parser->m_keyframe = adoptRef($4); } ;
webkit_decls: WEBKIT_DECLS_SYM '{' maybe_space_before_declaration declaration_list '}' ;
webkit_value:
    WEBKIT_VALUE_SYM '{' maybe_space expr '}' {
        if ($4) {
            parser->m_valueList = std::unique_ptr<CSSParserValueList>($4);
            int oldParsedProperties = parser->m_parsedProperties.size();
            if (!parser->parseValue(parser->m_id, parser->m_important))
                parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
            parser->m_valueList = nullptr;
        }
    }
;
webkit_mediaquery: WEBKIT_MEDIAQUERY_SYM WHITESPACE maybe_space media_query '}' { parser->m_mediaQuery = std::unique_ptr<MediaQuery>($4); } ;
webkit_selector:
    WEBKIT_SELECTOR_SYM '{' maybe_space selector_list '}' {
        if ($4) {
            if (parser->m_selectorListForParseSelector)
                parser->m_selectorListForParseSelector->adoptSelectorVector(*$4);
            parser->recycleSelectorVector(std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>($4));
        }
    }
;
webkit_supports_condition: WEBKIT_SUPPORTS_CONDITION_SYM WHITESPACE maybe_space supports_condition '}' { parser->m_supportsCondition = $4; } ;
space: WHITESPACE | space WHITESPACE ;
maybe_space: %prec UNIMPORTANT_TOK | maybe_space WHITESPACE ;
maybe_sgml: | maybe_sgml SGML_CD | maybe_sgml WHITESPACE ;
maybe_charset: | charset ;
closing_brace: '}' | %prec LOWEST_PREC TOKEN_EOF ;
closing_parenthesis: ')' | %prec LOWEST_PREC TOKEN_EOF ;
closing_bracket: ']' | %prec LOWEST_PREC TOKEN_EOF;
charset:
  CHARSET_SYM maybe_space STRING maybe_space ';' {
     if (parser->m_styleSheet)
         parser->m_styleSheet->parserSetEncodingFromCharsetRule($3);
     if (parser->isExtractingSourceData() && parser->m_currentRuleDataStack->isEmpty() && parser->m_ruleSourceDataResult)
         parser->addNewRuleToSourceTree(CSSRuleSourceData::createUnknown());
  }
  | CHARSET_SYM error invalid_block
  | CHARSET_SYM error ';'
;
ignored_charset: CHARSET_SYM maybe_space STRING maybe_space ';' | CHARSET_SYM maybe_space ';' ;
rule_list:
    | rule_list rule maybe_sgml {
        if (RefPtr<StyleRuleBase> rule = adoptRef($2)) {
            if (parser->m_styleSheet)
                parser->m_styleSheet->parserAppendRule(rule.releaseNonNull());
        }
    }
    ;
valid_rule:
    ruleset
  | media
  | page
  | font_face
  | keyframes
  | namespace { $$ = nullptr; }
  | import
  | region
  | supports
  ;
rule:
    valid_rule {
        $$ = $1;
        parser->m_hadSyntacticallyValidCSSRule = true;
    }
    | ignored_charset { $$ = nullptr; }
    | invalid_rule { $$ = nullptr; }
    | invalid_at { $$ = nullptr; }
    ;
block_rule_list:
                { $$ = nullptr; }
  | block_rule_list block_rule maybe_sgml {
      $$ = $1;
      if (RefPtr<StyleRuleBase> rule = adoptRef($2)) {
          if (!$$)
              $$ = new Vector<RefPtr<StyleRuleBase>>;
          $$->append(rule.release());
      }
  }
  ;
block_valid_rule_list:
                { $$ = nullptr; }
  | block_valid_rule_list block_valid_rule maybe_sgml {
      $$ = $1;
      if (RefPtr<StyleRuleBase> rule = adoptRef($2)) {
          if (!$$)
              $$ = new Vector<RefPtr<StyleRuleBase>>;
          $$->append(rule.release());
      }
  }
  ;
block_valid_rule:
    ruleset
  | page
  | font_face
  | media
  | keyframes
  | supports
  ;
block_rule: block_valid_rule | invalid_rule { $$ = nullptr; } | invalid_at { $$ = nullptr; } | namespace { $$ = nullptr; } | import | region ;
at_import_header_end_maybe_space:
    maybe_space {
        parser->markRuleHeaderEnd();
        parser->markRuleBodyStart();
    }
    ;
before_import_rule:
                {
        parser->markRuleHeaderStart(CSSRuleSourceData::IMPORT_RULE);
    }
    ;
import:
    before_import_rule IMPORT_SYM at_import_header_end_maybe_space string_or_uri maybe_space maybe_media_list ';' {
        $$ = parser->createImportRule($4, adoptRef($6)).leakRef();
    }
  | before_import_rule IMPORT_SYM at_import_header_end_maybe_space string_or_uri maybe_space maybe_media_list TOKEN_EOF {
        $$ = parser->createImportRule($4, adoptRef($6)).leakRef();
    }
  | before_import_rule IMPORT_SYM at_import_header_end_maybe_space string_or_uri maybe_space maybe_media_list invalid_block {
        $$ = nullptr;
        parser->popRuleData();
        if ($6)
            $6->deref();
    }
  | before_import_rule IMPORT_SYM error ';' {
        $$ = nullptr;
        parser->popRuleData();
    }
  | before_import_rule IMPORT_SYM error invalid_block {
        $$ = nullptr;
        parser->popRuleData();
    }
  ;
namespace:
    NAMESPACE_SYM maybe_space maybe_ns_prefix string_or_uri maybe_space ';' { parser->addNamespace($3, $4); }
    | NAMESPACE_SYM maybe_space maybe_ns_prefix string_or_uri maybe_space invalid_block
    | NAMESPACE_SYM error invalid_block
    | NAMESPACE_SYM error ';'
    ;
maybe_ns_prefix: { $$.clear(); } | IDENT maybe_space;
string_or_uri: STRING | URI ;
maybe_media_value: { $$ = nullptr; } | ':' maybe_space expr maybe_space { $$ = $3; } ;
webkit_source_size_list:
    WEBKIT_SIZESATTR_SYM WHITESPACE source_size_list maybe_space '}' {
        parser->m_sourceSizeList = std::unique_ptr<Vector<CSSParser::SourceSize>>($3);
    }
    ;
source_size_list:
    maybe_source_media_query_exp source_size_length {
        $$ = new Vector<CSSParser::SourceSize>;
        $$->append(parser->sourceSize(std::unique_ptr<MediaQueryExp>($1), $2));
    }
    | source_size_list maybe_space ',' maybe_space maybe_source_media_query_exp source_size_length {
        $$ = $1;
        $$->append(parser->sourceSize(std::unique_ptr<MediaQueryExp>($5), $6));
    }
    ;
maybe_source_media_query_exp:
                {
        $$ = new MediaQueryExp;
    }
    | base_media_query_exp maybe_space;
source_size_length: unary_term | calc_function;
base_media_query_exp: '(' maybe_space IDENT maybe_space maybe_media_value ')' {
        std::unique_ptr<CSSParserValueList> mediaValue($5);
        $3.lower();
        $$ = new MediaQueryExp($3, mediaValue.get());
    }
    ;
media_query_exp:
    maybe_media_restrictor maybe_space base_media_query_exp maybe_space {
        if ($1 != MediaQuery::None) {
            delete $3;
            $$ = new MediaQueryExp;
        } else
            $$ = $3;
    }
    ;
media_query_exp_list:
    media_query_exp {
        $$ = new Vector<std::unique_ptr<MediaQueryExp>>;
        $$->append(std::unique_ptr<MediaQueryExp>($1));
    }
    | media_query_exp_list maybe_space MEDIA_AND maybe_space media_query_exp {
        $$ = $1;
        $$->append(std::unique_ptr<MediaQueryExp>($5));
    }
    ;
maybe_and_media_query_exp_list:
              {
        $$ = new Vector<std::unique_ptr<MediaQueryExp>>;
    }
    | MEDIA_AND maybe_space media_query_exp_list {
        $$ = $3;
    }
    ;
maybe_media_restrictor:
              {
        $$ = MediaQuery::None;
    }
    | MEDIA_ONLY {
        $$ = MediaQuery::Only;
    }
    | MEDIA_NOT {
        $$ = MediaQuery::Not;
    }
    ;
media_query:
    media_query_exp_list {
        $$ = new MediaQuery(MediaQuery::None, "all", std::unique_ptr<Vector<std::unique_ptr<MediaQueryExp>>>($1));
    }
    |
    maybe_media_restrictor maybe_space IDENT maybe_space maybe_and_media_query_exp_list {
        $3.lower();
        $$ = new MediaQuery($1, $3, std::unique_ptr<Vector<std::unique_ptr<MediaQueryExp>>>($5));
    }
    ;
maybe_media_list: { $$ = &MediaQuerySet::create().leakRef(); } | media_list ;
media_list:
    media_query {
        $$ = &MediaQuerySet::create().leakRef();
        $$->addMediaQuery(std::unique_ptr<MediaQuery>($1));
        parser->updateLastMediaLine($$);
    }
    | media_list ',' maybe_space media_query {
        $$ = $1;
        std::unique_ptr<MediaQuery> mediaQuery($4);
        if ($$) {
            $$->addMediaQuery(WTF::move(mediaQuery));
            parser->updateLastMediaLine($$);
        }
    }
    | media_list error {
        $$ = nullptr;
        if ($1)
            $1->deref();
    }
    ;
at_rule_body_start:
                {
        parser->markRuleBodyStart();
    }
    ;
before_media_rule:
                {
        parser->markRuleHeaderStart(CSSRuleSourceData::MEDIA_RULE);
    }
    ;
at_rule_header_end_maybe_space:
    maybe_space {
        parser->markRuleHeaderEnd();
    }
    ;
media:
    before_media_rule MEDIA_SYM maybe_space media_list at_rule_header_end '{' at_rule_body_start maybe_space block_rule_list save_block {
        $$ = parser->createMediaRule(adoptRef($4), std::unique_ptr<Vector<RefPtr<StyleRuleBase>>>($9).get()).leakRef();
    }
    | before_media_rule MEDIA_SYM at_rule_header_end_maybe_space '{' at_rule_body_start maybe_space block_rule_list save_block {
        $$ = parser->createEmptyMediaRule(std::unique_ptr<Vector<RefPtr<StyleRuleBase>>>($7).get()).leakRef();
    }
    | before_media_rule MEDIA_SYM at_rule_header_end_maybe_space ';' {
        $$ = nullptr;
        parser->popRuleData();
    }
    ;
supports:
    before_supports_rule SUPPORTS_SYM maybe_space supports_condition at_supports_rule_header_end '{' at_rule_body_start maybe_space block_rule_list save_block {
        $$ = parser->createSupportsRule($4, std::unique_ptr<Vector<RefPtr<StyleRuleBase>>>($9).get()).leakRef();
    }
    | before_supports_rule SUPPORTS_SYM supports_error {
        $$ = nullptr;
        parser->popRuleData();
        parser->popSupportsRuleData();
    }
    ;
supports_error:
    error ';' {
        $$ = false;
    }
    | error invalid_block {
        $$ = false;
    }
    ;
before_supports_rule:
                {
        parser->markRuleHeaderStart(CSSRuleSourceData::SUPPORTS_RULE);
        parser->markSupportsRuleHeaderStart();
    }
    ;
at_supports_rule_header_end:
                {
        parser->markRuleHeaderEnd();
        parser->markSupportsRuleHeaderEnd();
    }
    ;
supports_condition: supports_condition_in_parens | supports_negation | supports_conjunction | supports_disjunction ;
supports_negation: SUPPORTS_NOT maybe_space supports_condition_in_parens { $$ = !$3; } ;
supports_conjunction:
    supports_condition_in_parens SUPPORTS_AND maybe_space supports_condition_in_parens { $$ = $1 && $4; }
    | supports_conjunction SUPPORTS_AND maybe_space supports_condition_in_parens { $$ = $1 && $4; }
    ;
supports_disjunction:
    supports_condition_in_parens SUPPORTS_OR maybe_space supports_condition_in_parens { $$ = $1 || $4; }
    | supports_disjunction SUPPORTS_OR maybe_space supports_condition_in_parens { $$ = $1 || $4; }
    ;
supports_condition_in_parens:
    '(' maybe_space supports_condition ')' maybe_space { $$ = $3; }
    | supports_declaration_condition { $$ = $1; }
    | '(' error ')' { $$ = false; }
    ;
supports_declaration_condition:
    '(' maybe_space property ':' maybe_space expr priority ')' maybe_space {
        $$ = false;
        CSSParser* p = static_cast<CSSParser*>(parser);
        std::unique_ptr<CSSParserValueList> propertyValue($6);
        if ($3 && propertyValue) {
            p->m_valueList = WTF::move(propertyValue);
            int oldParsedProperties = p->m_parsedProperties.size();
            $$ = p->parseValue($3, $7);
            if ($$)
                p->rollbackLastProperties(p->m_parsedProperties.size() - oldParsedProperties);
            p->m_valueList = nullptr;
        }
        p->markPropertyEnd($7, false);
    }
    ;
before_keyframes_rule:
                {
        parser->markRuleHeaderStart(CSSRuleSourceData::KEYFRAMES_RULE);
    }
    ;
keyframes:
    before_keyframes_rule KEYFRAMES_SYM maybe_space keyframe_name at_rule_header_end_maybe_space '{' at_rule_body_start maybe_space keyframes_rule closing_brace {
        $$ = parser->createKeyframesRule($4, std::unique_ptr<Vector<RefPtr<StyleKeyframe>>>($9)).leakRef();
    }
    ;
keyframe_name: IDENT | STRING ;
keyframes_rule:
                { $$ = new Vector<RefPtr<StyleKeyframe>>; }
    | keyframes_rule keyframe_rule maybe_space {
        $$ = $1;
        if (RefPtr<StyleKeyframe> keyframe = adoptRef($2))
            $$->append(keyframe.release());
    }
    ;
keyframe_rule: key_list maybe_space '{' maybe_space declaration_list closing_brace { $$ = parser->createKeyframe(*std::unique_ptr<CSSParserValueList>($1)).leakRef(); } ;
key_list:
    key {
        $$ = new CSSParserValueList;
        $$->addValue($1);
    }
    | key_list maybe_space ',' maybe_space key {
        $$ = $1;
        ASSERT($5.unit != CSSParserValue::Function);
        if ($$)
            $$->addValue($5);
    }
    ;
key:
    maybe_unary_operator PERCENTAGE { $$.id = CSSValueInvalid; $$.isInt = false; $$.fValue = $1 * $2; $$.unit = CSSPrimitiveValue::CSS_NUMBER; }
    | IDENT {
        $$.id = CSSValueInvalid; $$.isInt = false; $$.unit = CSSPrimitiveValue::CSS_NUMBER;
        CSSParserString& str = $1;
        if (str.equalIgnoringCase("from"))
            $$.fValue = 0;
        else if (str.equalIgnoringCase("to"))
            $$.fValue = 100;
        else {
            $$.unit = 0;
            YYERROR;
        }
    }
    | error {
        $$.unit = 0;
    }
    ;
before_page_rule:
                {
        parser->markRuleHeaderStart(CSSRuleSourceData::PAGE_RULE);
    }
    ;
page:
    before_page_rule PAGE_SYM maybe_space page_selector at_rule_header_end_maybe_space
    '{' at_rule_body_start maybe_space_before_declaration declarations_and_margins closing_brace {
        if ($4)
            $$ = parser->createPageRule(std::unique_ptr<CSSParserSelector>($4)).leakRef();
        else {
            parser->clearProperties();
            $$ = nullptr;
            parser->popRuleData();
        }
    }
    | before_page_rule PAGE_SYM error invalid_block {
        parser->popRuleData();
        $$ = nullptr;
    }
    | before_page_rule PAGE_SYM error ';' {
        parser->popRuleData();
        $$ = nullptr;
    }
    ;
page_selector:
    IDENT {
        $$ = new CSSParserSelector(QualifiedName(nullAtom, $1, parser->m_defaultNamespace));
        $$->setForPage();
    }
    | IDENT pseudo_page {
        $$ = $2;
        if ($$) {
            $$->prependTagSelector(QualifiedName(nullAtom, $1, parser->m_defaultNamespace));
            $$->setForPage();
        }
    }
    | pseudo_page {
        $$ = $1;
        if ($$)
            $$->setForPage();
    }
    | {
        $$ = new CSSParserSelector;
        $$->setForPage();
    }
    ;
declarations_and_margins: declaration_list | declarations_and_margins margin_box maybe_space declaration_list ;
margin_box:
    margin_sym {
        parser->startDeclarationsForMarginBox();
    } maybe_space '{' maybe_space declaration_list closing_brace {
        parser->createMarginAtRule($1);
    }
    ;
margin_sym:
    TOPLEFTCORNER_SYM {
        $$ = CSSSelector::TopLeftCornerMarginBox;
    }
    | TOPLEFT_SYM {
        $$ = CSSSelector::TopLeftMarginBox;
    }
    | TOPCENTER_SYM {
        $$ = CSSSelector::TopCenterMarginBox;
    }
    | TOPRIGHT_SYM {
        $$ = CSSSelector::TopRightMarginBox;
    }
    | TOPRIGHTCORNER_SYM {
        $$ = CSSSelector::TopRightCornerMarginBox;
    }
    | BOTTOMLEFTCORNER_SYM {
        $$ = CSSSelector::BottomLeftCornerMarginBox;
    }
    | BOTTOMLEFT_SYM {
        $$ = CSSSelector::BottomLeftMarginBox;
    }
    | BOTTOMCENTER_SYM {
        $$ = CSSSelector::BottomCenterMarginBox;
    }
    | BOTTOMRIGHT_SYM {
        $$ = CSSSelector::BottomRightMarginBox;
    }
    | BOTTOMRIGHTCORNER_SYM {
        $$ = CSSSelector::BottomRightCornerMarginBox;
    }
    | LEFTTOP_SYM {
        $$ = CSSSelector::LeftTopMarginBox;
    }
    | LEFTMIDDLE_SYM {
        $$ = CSSSelector::LeftMiddleMarginBox;
    }
    | LEFTBOTTOM_SYM {
        $$ = CSSSelector::LeftBottomMarginBox;
    }
    | RIGHTTOP_SYM {
        $$ = CSSSelector::RightTopMarginBox;
    }
    | RIGHTMIDDLE_SYM {
        $$ = CSSSelector::RightMiddleMarginBox;
    }
    | RIGHTBOTTOM_SYM {
        $$ = CSSSelector::RightBottomMarginBox;
    }
    ;
before_font_face_rule:
                {
        parser->markRuleHeaderStart(CSSRuleSourceData::FONT_FACE_RULE);
    }
    ;
font_face:
    before_font_face_rule FONT_FACE_SYM at_rule_header_end_maybe_space '{' at_rule_body_start maybe_space_before_declaration declaration_list closing_brace {
        $$ = parser->createFontFaceRule().leakRef();
    }
    | before_font_face_rule FONT_FACE_SYM error invalid_block {
        $$ = nullptr;
        parser->popRuleData();
    }
    | before_font_face_rule FONT_FACE_SYM error ';' {
        $$ = nullptr;
        parser->popRuleData();
    }
;
before_region_rule:
                {
        parser->markRuleHeaderStart(CSSRuleSourceData::REGION_RULE);
    }
    ;
region:
    before_region_rule WEBKIT_REGION_RULE_SYM maybe_space selector_list at_rule_header_end '{' at_rule_body_start maybe_space block_valid_rule_list save_block {
        std::unique_ptr<Vector<RefPtr<StyleRuleBase>>> ruleList($9);
        if ($4)
            $$ = parser->createRegionRule(std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>($4).get(), ruleList.get()).leakRef();
        else {
            $$ = nullptr;
            parser->popRuleData();
        }
    }
;
combinator:
    '+' maybe_space { $$ = CSSParserSelectorCombinator::DirectAdjacent; }
  | '~' maybe_space { $$ = CSSParserSelectorCombinator::IndirectAdjacent; }
  | '>' maybe_space { $$ = CSSParserSelectorCombinator::Child; }
  | '>' '>' maybe_space { $$ = CSSParserSelectorCombinator::DescendantDoubleChild; }
  ;
maybe_unary_operator: unary_operator | { $$ = 1; } ;
unary_operator: '-' { $$ = -1; } | '+' { $$ = 1; } ;
maybe_space_before_declaration: maybe_space { parser->markPropertyStart(); } ;
before_selector_list:
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::STYLE_RULE);
        parser->markSelectorStart();
    }
  ;
at_rule_header_end: { parser->markRuleHeaderEnd(); } ;
at_selector_end: { parser->markSelectorEnd(); } ;
ruleset:
    before_selector_list selector_list at_selector_end at_rule_header_end '{' at_rule_body_start maybe_space_before_declaration declaration_list closing_brace {
        $$ = parser->createStyleRule($2).leakRef();
        parser->recycleSelectorVector(std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>($2));
    }
  ;
before_selector_group_item: { parser->markSelectorStart(); } ;
selector_list:
    complex_selector %prec UNIMPORTANT_TOK {
        $$ = nullptr;
        if ($1) {
            $$ = parser->createSelectorVector().release();
            $$->append(std::unique_ptr<CSSParserSelector>($1));
            parser->updateLastSelectorLineAndPosition();
        }
    }
    | selector_list at_selector_end ',' maybe_space before_selector_group_item complex_selector %prec UNIMPORTANT_TOK {
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> selectorList($1);
        std::unique_ptr<CSSParserSelector> selector($6);
        $$ = nullptr;
        if (selectorList && selector) {
            $$ = selectorList.release();
            $$->append(WTF::move(selector));
            parser->updateLastSelectorLineAndPosition();
        }
    }
    | selector_list error {
        $$ = nullptr;
        delete $1;
    }
   ;
before_nested_selector_list: { parser->startNestedSelectorList(); } ;
after_nested_selector_list: { parser->endNestedSelectorList(); } ;
nested_selector_list:
    before_nested_selector_list selector_list after_nested_selector_list {
        $$ = $2;
    }
    ;
lang_range: IDENT | STRING ;
comma_separated_lang_ranges:
    lang_range %prec UNIMPORTANT_TOK {
        $$ = new Vector<CSSParserString>;
        $$->append($1);
    }
    | comma_separated_lang_ranges maybe_space ',' maybe_space lang_range %prec UNIMPORTANT_TOK {
        $$ = $1;
        if ($$)
            $1->append($5);
    }
    | comma_separated_lang_ranges error {
        $$ = nullptr;
        delete $1;
    }
    ;
complex_selector_with_trailing_whitespace:
    complex_selector WHITESPACE;
complex_selector:
    compound_selector
    | complex_selector_with_trailing_whitespace
    | complex_selector_with_trailing_whitespace compound_selector {
        std::unique_ptr<CSSParserSelector> left($1);
        std::unique_ptr<CSSParserSelector> right($2);
        $$ = nullptr;
        if (left && right) {
            right->appendTagHistory(CSSParserSelectorCombinator::DescendantSpace, WTF::move(left));
            $$ = right.release();
        }
    }
    | complex_selector combinator compound_selector {
        std::unique_ptr<CSSParserSelector> left($1);
        std::unique_ptr<CSSParserSelector> right($3);
        $$ = nullptr;
        if (left && right) {
            right->appendTagHistory($2, WTF::move(left));
            $$ = right.release();
        }
    }
    | complex_selector error {
        $$ = nullptr;
        delete $1;
    }
    ;
namespace_selector:
    '|' { $$.clear(); }
    | '*' '|' { static LChar star = '*'; $$.init(&star, 1); }
    | IDENT '|'
;
compound_selector:
    element_name {
        $$ = new CSSParserSelector(QualifiedName(nullAtom, $1, parser->m_defaultNamespace));
    }
    | element_name specifier_list {
        $$ = $2;
        if ($$)
            parser->rewriteSpecifiersWithElementName(nullAtom, $1, *$$);
    }
    | specifier_list {
        $$ = $1;
        if ($$)
            parser->rewriteSpecifiersWithNamespaceIfNeeded(*$$);
    }
    | namespace_selector element_name {
        $$ = new CSSParserSelector(parser->determineNameInNamespace($1, $2));
    }
    | namespace_selector element_name specifier_list {
        $$ = $3;
        if ($$)
            parser->rewriteSpecifiersWithElementName($1, $2, *$$);
    }
    | namespace_selector specifier_list {
        $$ = $2;
        if ($$)
            parser->rewriteSpecifiersWithElementName($1, starAtom, *$$);
    }
  ;
simple_selector_list:
    compound_selector %prec UNIMPORTANT_TOK {
        $$ = nullptr;
        if ($1) {
            $$ = parser->createSelectorVector().release();
            $$->append(std::unique_ptr<CSSParserSelector>($1));
        }
    }
    | simple_selector_list maybe_space ',' maybe_space compound_selector %prec UNIMPORTANT_TOK {
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> list($1);
        std::unique_ptr<CSSParserSelector> selector($5);
        $$ = nullptr;
        if (list && selector) {
            $$ = list.release();
            $$->append(WTF::move(selector));
        }
    }
    | simple_selector_list error {
        $$ = nullptr;
        delete $1;
    }
    ;
element_name:
    IDENT {
        $$ = $1;
    }
    | '*' {
        static LChar star = '*';
        $$.init(&star, 1);
    }
    ;
specifier_list:
    specifier
    | specifier_list specifier {
        std::unique_ptr<CSSParserSelector> list($1);
        std::unique_ptr<CSSParserSelector> specifier($2);
        $$ = nullptr;
        if (list && specifier)
            $$ = parser->rewriteSpecifiers(WTF::move(list), WTF::move(specifier)).release();
    }
    | specifier_list error {
        $$ = nullptr;
        delete $1;
    }
;
specifier:
    IDSEL {
        $$ = new CSSParserSelector;
        $$->setMatch(CSSSelector::Id);
        if (parser->m_context.mode == CSSQuirksMode)
            $1.lower();
        $$->setValue($1);
    }
  | HEX {
        if ($1[0] >= '0' && $1[0] <= '9')
            $$ = nullptr;
        else {
            $$ = new CSSParserSelector;
            $$->setMatch(CSSSelector::Id);
            if (parser->m_context.mode == CSSQuirksMode)
                $1.lower();
            $$->setValue($1);
        }
    }
  | class
  | attrib
  | pseudo
    ;
class:
    '.' IDENT {
        $$ = new CSSParserSelector;
        $$->setMatch(CSSSelector::Class);
        if (parser->m_context.mode == CSSQuirksMode)
            $2.lower();
        $$->setValue($2);
    }
  ;
attrib:
    '[' maybe_space IDENT maybe_space ']' {
        $$ = new CSSParserSelector;
        $$->setAttribute(QualifiedName(nullAtom, $3, nullAtom), parser->m_context.isHTMLDocument);
        $$->setMatch(CSSSelector::Set);
    }
    | '[' maybe_space IDENT maybe_space match maybe_space ident_or_string maybe_space attrib_flags ']' {
        $$ = new CSSParserSelector;
        $$->setAttribute(QualifiedName(nullAtom, $3, nullAtom), parser->m_context.isHTMLDocument);
        $$->setMatch($5);
        $$->setValue($7);
        $$->setAttributeValueMatchingIsCaseInsensitive($9);
    }
    | '[' maybe_space namespace_selector IDENT maybe_space ']' {
        $$ = new CSSParserSelector;
        $$->setAttribute(parser->determineNameInNamespace($3, $4), parser->m_context.isHTMLDocument);
        $$->setMatch(CSSSelector::Set);
    }
    | '[' maybe_space namespace_selector IDENT maybe_space match maybe_space ident_or_string maybe_space attrib_flags ']' {
        $$ = new CSSParserSelector;
        $$->setAttribute(parser->determineNameInNamespace($3, $4), parser->m_context.isHTMLDocument);
        $$->setMatch($6);
        $$->setValue($8);
        $$->setAttributeValueMatchingIsCaseInsensitive($10);
    }
  ;
attrib_flags:
    IDENT maybe_space {
        if (UNLIKELY($1.length() != 1 || !isASCIIAlphaCaselessEqual($1[0], 'i')))
            YYERROR;
        $$ = true;
    }
    |
                {
        $$ = false;
    }
match:
    '=' {
        $$ = CSSSelector::Exact;
    }
    | INCLUDES {
        $$ = CSSSelector::List;
    }
    | DASHMATCH {
        $$ = CSSSelector::Hyphen;
    }
    | BEGINSWITH {
        $$ = CSSSelector::Begin;
    }
    | ENDSWITH {
        $$ = CSSSelector::End;
    }
    | CONTAINS {
        $$ = CSSSelector::Contain;
    }
    ;
ident_or_string: IDENT | STRING ;
pseudo_page:
    ':' IDENT {
        $$ = CSSParserSelector::parsePagePseudoSelector($2);
    }
nth_selector_ending:
    ')' {
        $$ = nullptr;
    }
    | space ')' {
        $$ = nullptr;
    }
    | space NTHCHILDSELECTORSEPARATOR space nested_selector_list maybe_space ')' {
        if ($4)
            $$ = $4;
        else
            YYERROR;
    }
    ;
pseudo:
    ':' IDENT {
        $$ = CSSParserSelector::parsePseudoClassAndCompatibilityElementSelector($2);
    }
    | ':' ':' IDENT {
        $$ = CSSParserSelector::parsePseudoElementSelector($3);
    }
    | ':' ':' CUEFUNCTION maybe_space simple_selector_list maybe_space ')' {
        $$ = CSSParserSelector::parsePseudoElementCueFunctionSelector($3, $5);
    }
    | ':' ANYFUNCTION maybe_space simple_selector_list maybe_space ')' {
        $$ = nullptr;
        if ($4) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->adoptSelectorVector(*std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>($4));
            selector->setPseudoClassValue($2);
            if (selector->pseudoClassType() == CSSSelector::PseudoClassAny)
                $$ = selector.release();
        }
    }
    | ':' MATCHESFUNCTION maybe_space nested_selector_list maybe_space ')' {
        $$ = nullptr;
        if ($4) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->adoptSelectorVector(*std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>($4));
            selector->setPseudoClassValue($2);
            if (selector->pseudoClassType() == CSSSelector::PseudoClassMatches)
                $$ = selector.release();
        }
    }
    | ':' LANGFUNCTION maybe_space comma_separated_lang_ranges maybe_space ')' {
        $$ = nullptr;
        if ($4) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->setLangArgumentList(*std::unique_ptr<Vector<CSSParserString>>($4));
            selector->setPseudoClassValue($2);
            if (selector->pseudoClassType() == CSSSelector::PseudoClassLang)
                $$ = selector.release();
        }
    }
    | ':' DIRFUNCTION maybe_space IDENT maybe_space ')' {
        $$ = nullptr;
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument($4);
        selector->setPseudoClassValue($2);
        if (selector->pseudoClassType() == CSSSelector::PseudoClassDir)
            $$ = selector.release();
    }
    | ':' ROLEFUNCTION maybe_space IDENT maybe_space ')' {
        $$ = nullptr;
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument($4);
        selector->setPseudoClassValue($2);
        if (selector->pseudoClassType() == CSSSelector::PseudoClassRole)
            $$ = selector.release();
    }
    | ':' NTHCHILDFUNCTIONS maybe_space NTH nth_selector_ending {
        $$ = nullptr;
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> ending($5);
        if (selectorListDoesNotMatchAnyPseudoElement(ending.get())) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->setArgument($4);
            selector->setPseudoClassValue($2);
            if (ending)
                selector->adoptSelectorVector(*ending);
            CSSSelector::PseudoClassType pseudoClassType = selector->pseudoClassType();
            if (pseudoClassType == CSSSelector::PseudoClassNthChild || pseudoClassType == CSSSelector::PseudoClassNthLastChild)
                $$ = selector.release();
        }
    }
    | ':' NTHCHILDFUNCTIONS maybe_space maybe_unary_operator INTEGER nth_selector_ending {
        $$ = nullptr;
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> ending($6);
        if (selectorListDoesNotMatchAnyPseudoElement(ending.get())) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->setArgument(AtomicString::number($4 * $5));
            selector->setPseudoClassValue($2);
            if (ending)
                selector->adoptSelectorVector(*ending);
            CSSSelector::PseudoClassType pseudoClassType = selector->pseudoClassType();
            if (pseudoClassType == CSSSelector::PseudoClassNthChild || pseudoClassType == CSSSelector::PseudoClassNthLastChild)
                $$ = selector.release();
        }
    }
    | ':' NTHCHILDFUNCTIONS maybe_space IDENT nth_selector_ending {
        $$ = nullptr;
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> ending($5);
        if (isValidNthToken($4) && selectorListDoesNotMatchAnyPseudoElement(ending.get())) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->setArgument($4);
            selector->setPseudoClassValue($2);
            if (ending)
               selector->adoptSelectorVector(*ending);
            CSSSelector::PseudoClassType pseudoClassType = selector->pseudoClassType();
            if (pseudoClassType == CSSSelector::PseudoClassNthChild || pseudoClassType == CSSSelector::PseudoClassNthLastChild)
                $$ = selector.release();
        }
    }
    | ':' FUNCTION maybe_space NTH maybe_space ')' {
        $$ = nullptr;
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument($4);
        selector->setPseudoClassValue($2);
        if (selector->pseudoClassType() != CSSSelector::PseudoClassUnknown)
            $$ = selector.release();
    }
    | ':' FUNCTION maybe_space maybe_unary_operator INTEGER maybe_space ')' {
        $$ = nullptr;
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument(AtomicString::number($4 * $5));
        selector->setPseudoClassValue($2);
        if (selector->pseudoClassType() != CSSSelector::PseudoClassUnknown)
            $$ = selector.release();
    }
    | ':' FUNCTION maybe_space IDENT maybe_space ')' {
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument($4);
        selector->setPseudoClassValue($2);
        CSSSelector::PseudoClassType type = selector->pseudoClassType();
        if (type == CSSSelector::PseudoClassUnknown)
            selector = nullptr;
        else if (type == CSSSelector::PseudoClassNthChild ||
                 type == CSSSelector::PseudoClassNthOfType ||
                 type == CSSSelector::PseudoClassNthLastChild ||
                 type == CSSSelector::PseudoClassNthLastOfType) {
            if (!isValidNthToken($4))
                selector = nullptr;
        }
        $$ = selector.release();
    }
    | ':' NOTFUNCTION maybe_space nested_selector_list maybe_space ')' {
        $$ = nullptr;
        if ($4) {
            std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> list($4);
            if (selectorListDoesNotMatchAnyPseudoElement(list.get())) {
                auto selector = std::make_unique<CSSParserSelector>();
                selector->setMatch(CSSSelector::PseudoClass);
                selector->setPseudoClassValue($2);
                selector->adoptSelectorVector(*list);
                if (selector->pseudoClassType() == CSSSelector::PseudoClassNot)
                    $$ = selector.release();
            }
        }
    }
  ;
declaration_list:
                { $$ = false; }
    | declaration
    | decl_list declaration { $$ = $1 || $2; }
    | decl_list
    | decl_list_recovery { $$ = false; }
    | decl_list decl_list_recovery
    ;
decl_list:
    declaration ';' maybe_space {
        parser->markPropertyStart();
        $$ = $1;
    }
    | decl_list_recovery ';' maybe_space {
        parser->markPropertyStart();
        $$ = false;
    }
    | decl_list declaration ';' maybe_space {
        parser->markPropertyStart();
        $$ = $1;
        if ($2)
            $$ = $2;
    }
    | decl_list decl_list_recovery ';' maybe_space {
        parser->markPropertyStart();
        $$ = $1;
    }
    ;
decl_list_recovery:
    error error_location error_recovery {
        parser->syntaxError($2, CSSParser::PropertyDeclarationError);
    }
    ;
declaration:
    property ':' maybe_space expr priority {
        $$ = false;
        bool isPropertyParsed = false;
        std::unique_ptr<CSSParserValueList> propertyValue($4);
        if ($1 && propertyValue) {
            parser->m_valueList = WTF::move(propertyValue);
            int oldParsedProperties = parser->m_parsedProperties.size();
            $$ = parser->parseValue($1, $5);
            if (!$$)
                parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
            else
                isPropertyParsed = true;
            parser->m_valueList = nullptr;
        }
        parser->markPropertyEnd($5, isPropertyParsed);
    }
    | property declaration_recovery { $$ = false; }
    | property ':' maybe_space expr priority declaration_recovery {
        parser->markPropertyEnd(false, false);
        delete $4;
        $$ = false;
    }
    | IMPORTANT_SYM maybe_space declaration_recovery {
        $$ = false;
    }
    | property ':' maybe_space declaration_recovery {
        parser->markPropertyEnd(false, false);
        $$ = false;
    }
  ;
declaration_recovery: error error_location error_recovery { parser->syntaxError($2); } ;
property: IDENT maybe_space { $$ = cssPropertyID($1); } ;
priority: IMPORTANT_SYM maybe_space { $$ = true; } | { $$ = false; } ;
ident_list:
    IDENT maybe_space {
        $$ = new CSSParserValueList;
        $$->addValue(makeIdentValue($1));
    }
    | ident_list IDENT maybe_space {
        $$ = $1;
        $$->addValue(makeIdentValue($2));
    }
    ;
track_names_list:
    '[' maybe_space closing_bracket {
        $$.setFromValueList(std::make_unique<CSSParserValueList>());
    }
    | '[' maybe_space ident_list closing_bracket {
        $$.setFromValueList(std::unique_ptr<CSSParserValueList>($3));
    }
    | '[' maybe_space expr_recovery closing_bracket {
        $$.id = CSSValueInvalid;
        $$.unit = 0;
        YYERROR;
    }
  ;
expr: valid_expr | valid_expr expr_recovery { $$ = nullptr; delete $1; } ;
valid_expr:
    term {
        $$ = new CSSParserValueList;
        $$->addValue($1);
    }
    | valid_expr operator term {
        $$ = $1;
        if (!$$)
            destroy($3);
        else {
            if ($2) {
                CSSParserValue v;
                v.id = CSSValueInvalid;
                v.unit = CSSParserValue::Operator;
                v.iValue = $2;
                $$->addValue(v);
            }
            $$->addValue($3);
        }
    }
  ;
expr_recovery: error error_location error_recovery ;
operator: '/' maybe_space { $$ = '/'; } | ',' maybe_space { $$ = ','; } | { $$ = 0; } ;
term:
  unary_term maybe_space
  | unary_operator unary_term maybe_space { $$ = $2; $$.fValue *= $1; }
  | STRING maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_STRING; }
  | IDENT maybe_space { $$ = makeIdentValue($1); }
  | DIMEN maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_DIMENSION; }
  | unary_operator DIMEN maybe_space { $$.id = CSSValueInvalid; $$.string = $2; $$.unit = CSSPrimitiveValue::CSS_DIMENSION; }
  | URI maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_URI; }
  | UNICODERANGE maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_UNICODE_RANGE; }
  | HEX maybe_space { $$.id = CSSValueInvalid; $$.string = $1; $$.unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; }
  | '#' maybe_space { $$.id = CSSValueInvalid; $$.string = CSSParserString(); $$.unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; }
  | function maybe_space
  | calc_function maybe_space
  | min_or_max_function maybe_space
  | '%' maybe_space {
      $$.id = CSSValueInvalid; $$.unit = 0;
  }
  | track_names_list maybe_space
  ;
unary_term:
  INTEGER { $$.id = CSSValueInvalid; $$.isInt = true; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_NUMBER; }
  | FLOATTOKEN { $$.id = CSSValueInvalid; $$.isInt = false; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_NUMBER; }
  | PERCENTAGE { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_PERCENTAGE; }
  | PXS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_PX; }
  | CMS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_CM; }
  | MMS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_MM; }
  | INS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_IN; }
  | PTS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_PT; }
  | PCS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_PC; }
  | DEGS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_DEG; }
  | RADS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_RAD; }
  | GRADS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_GRAD; }
  | TURNS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_TURN; }
  | MSECS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_MS; }
  | SECS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_S; }
  | HERTZ { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_HZ; }
  | KHERTZ { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_KHZ; }
  | EMS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_EMS; }
  | QEMS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSParserValue::Q_EMS; }
  | EXS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_EXS; }
  | REMS {
      $$.id = CSSValueInvalid;
      $$.fValue = $1;
      $$.unit = CSSPrimitiveValue::CSS_REMS;
      if (parser->m_styleSheet)
          parser->m_styleSheet->parserSetUsesRemUnits();
  }
  | CHS { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_CHS; }
  | VW { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_VW; }
  | VH { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_VH; }
  | VMIN { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_VMIN; }
  | VMAX { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_VMAX; }
  | DPPX { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_DPPX; }
  | DPI { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_DPI; }
  | DPCM { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_DPCM; }
  | FR { $$.id = CSSValueInvalid; $$.fValue = $1; $$.unit = CSSPrimitiveValue::CSS_FR; }
  ;
function:
    FUNCTION maybe_space expr closing_parenthesis {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = $1;
        f->args = std::unique_ptr<CSSParserValueList>($3);
        $$.id = CSSValueInvalid;
        $$.unit = CSSParserValue::Function;
        $$.function = f;
    } |
    FUNCTION maybe_space closing_parenthesis {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = $1;
        f->args = std::unique_ptr<CSSParserValueList>(new CSSParserValueList);
        $$.id = CSSValueInvalid;
        $$.unit = CSSParserValue::Function;
        $$.function = f;
    } |
    FUNCTION maybe_space expr_recovery closing_parenthesis {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = $1;
        f->args = nullptr;
        $$.id = CSSValueInvalid;
        $$.unit = CSSParserValue::Function;
        $$.function = f;
  }
  ;
calc_func_term:
  unary_term
  | unary_operator unary_term { $$ = $2; $$.fValue *= $1; }
  ;
calc_func_operator:
    space '+' space {
        $$ = '+';
    }
    | space '-' space {
        $$ = '-';
    }
    | calc_maybe_space '*' maybe_space {
        $$ = '*';
    }
    | calc_maybe_space '/' maybe_space {
        $$ = '/';
    }
  ;
calc_maybe_space: | WHITESPACE ;
calc_func_paren_expr:
    '(' maybe_space calc_func_expr calc_maybe_space closing_parenthesis {
        $$ = nullptr;
        if ($3) {
            $$ = $3;
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = '(';
            $$->insertValueAt(0, v);
            v.iValue = ')';
            $$->addValue(v);
        }
    }
  ;
calc_func_expr: valid_calc_func_expr | valid_calc_func_expr expr_recovery { $$ = nullptr; delete $1; } ;
valid_calc_func_expr:
    calc_func_term {
        $$ = new CSSParserValueList;
        $$->addValue($1);
    }
    | calc_func_expr calc_func_operator calc_func_term {
        std::unique_ptr<CSSParserValueList> expression($1);
        $$ = nullptr;
        if (expression && $2) {
            $$ = expression.release();
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = $2;
            $$->addValue(v);
            $$->addValue($3);
        } else {
            destroy($3);
        }
    }
    | calc_func_expr calc_func_operator calc_func_paren_expr {
        std::unique_ptr<CSSParserValueList> left($1);
        std::unique_ptr<CSSParserValueList> right($3);
        $$ = nullptr;
        if (left && $2 && right) {
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = $2;
            left->addValue(v);
            left->extend(*right);
            $$ = left.release();
        }
    }
    | calc_func_paren_expr
  ;
calc_func_expr_list:
    calc_func_expr calc_maybe_space
    | calc_func_expr_list ',' maybe_space calc_func_expr calc_maybe_space {
        std::unique_ptr<CSSParserValueList> list($1);
        std::unique_ptr<CSSParserValueList> expression($4);
        $$ = nullptr;
        if (list && expression) {
            $$ = list.release();
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = ',';
            $$->addValue(v);
            $$->extend(*expression);
        }
    }
  ;
calc_function:
    CALCFUNCTION maybe_space calc_func_expr calc_maybe_space closing_parenthesis {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = $1;
        f->args = std::unique_ptr<CSSParserValueList>($3);
        $$.id = CSSValueInvalid;
        $$.unit = CSSParserValue::Function;
        $$.function = f;
    }
    | CALCFUNCTION maybe_space expr_recovery closing_parenthesis {
        $$.id = CSSValueInvalid;
        $$.unit = 0;
        YYERROR;
    }
    ;
min_or_max: MINFUNCTION | MAXFUNCTION ;
min_or_max_function:
    min_or_max maybe_space calc_func_expr_list closing_parenthesis {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = $1;
        f->args = std::unique_ptr<CSSParserValueList>($3);
        $$.id = CSSValueInvalid;
        $$.unit = CSSParserValue::Function;
        $$.function = f;
    }
    | min_or_max maybe_space expr_recovery closing_parenthesis {
        $$.id = CSSValueInvalid;
        $$.unit = 0;
        YYERROR;
    }
    ;
save_block: closing_brace | error closing_brace ;
invalid_at: ATKEYWORD error invalid_block | ATKEYWORD error ';' ;
invalid_rule: error invalid_block ;
invalid_block: '{' error_recovery closing_brace { parser->invalidBlockHit(); } ;
invalid_square_brackets_block: '[' error_recovery closing_bracket ;
invalid_parentheses_block: opening_parenthesis error_recovery closing_parenthesis;
opening_parenthesis:
    '(' | FUNCTION | CALCFUNCTION | MATCHESFUNCTION | MAXFUNCTION | MINFUNCTION | ANYFUNCTION | NOTFUNCTION | LANGFUNCTION
    | DIRFUNCTION | ROLEFUNCTION
    | CUEFUNCTION
    ;
error_location: { $$ = parser->currentLocation(); } ;
error_recovery:
  | error_recovery error
  | error_recovery invalid_block
  | error_recovery invalid_square_brackets_block
  | error_recovery invalid_parentheses_block
    ;
%%
EA_WEBKIT_CSS_GRAMMAR_END();
