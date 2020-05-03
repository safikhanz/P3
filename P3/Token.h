#ifndef TOKEN_H
#define TOKEN_H

#include <string>

namespace Token
{
        enum tkID
        {
                IDENT_tk,
                NUM_tk,
                KW_tk,
                LINE_No,
                LBL_tk,
                GOTO_tk,
                LOOP_tk,
                VOID_tk,
                DECLR_tk,
                RETRN_tk,
                IN_tk,
                OUT_tk,
                PROGM_tk,
                IFFY_tk,
                THEN_tk,
                ASSGN_tk,
                DATA_tk,
                EOF_tk,
                ERR_tk,
                INT_tk,
                colonequals_tk,
                lessThan_tk,
                greaterThan_tk,
                doubleEqual_tk,
                colon_tk,
                plus_tk,
                minus_tk,
                multiply_tk,
                slash_tk,
                modulo_tk,
                period_tk,
                leftPar_tk,
                rightPar_tk,
                comma_tk,
                leftBrace_tk,
                rightBrace_tk,
                semicolon_tk,
                leftBracket_tk,
                rightBracket_tk

        };

        const std::string tkList[] = {
            "IDENT_tk", "NUM_tk", "KW_tk", "LINE_No", "LBL_tk", "GOTO_tk", "LOOP_tk", "VOID_tk",
            "DECLR_tk", "RETRN_tk", "IN_tk", "OUT_tk", "PROGM_tk", "IFFY_tk", "THEN_tk", "ASSGN_tk", "DATA_tk",
            "EOF_tk", "ERR_tk", "INT_tk", "colonequals_tk", "lessThan_tk", "greaterThan_tk", "doubleEqual_tk",
            "colon_tk", "plus_tk", "minus_tk", "multiply_tk", "slash_tk", "modulo_tk", "period_tk", "leftPar_tk",
            "rightPar_tk", "comma_tk", "leftBrace_tk", "rightBrace_tk", "semicolon_tk", "leftBracket_tk", "rightBracket_tk"

        };

        typedef struct Token_T
        {
                tkID id;
                std::string tokenName;
                int line;
        } Token;

} // namespace Token
#endif

/*

// const std::string Idname[] = {
        //      "iter","void","var","return","scan","print","program","cond","then","let","int",

        //      "assign","less","greater","colon","plus","minus",
        //      "mult","bslash","mod","dot","lparen","rparen","comma",
        //      "lcbracket","rcbracket","semicolon","lbracket","rbracket",

        //      "identifier","integer","EOF","error"
        // };

//const std::string Idname[] = {
//      "iter","void","return","scan","print",
//      "program","cond","then","let","int",

//      "=","<",">",":","+","-","*","/","%",".",
//      "(",")",",","{","}",";","[","]",
//
//      "identifier","integer","EOF","error"
//};

// typedef enum tokenInstances {

//      //Keywords
//      ITER, VOIDtk, VAR, RETURN, SCAN, PRINT, PROGRAM, COND,
//      THEN, LET, INTtk,

//      //Digits / Identifiers
//      DIGIT,
//      IDENTIFIER,

//      //Operators / Delimiter / White Space
//      ASSIGN, LESS, GREATER, COLON, PLUS, MINUS, MULT, BSLASH
//      MOD, DOT, LPAREN, RPAREN, COMMA, LCBRACKET, RCBRACKET,
//      SEMICOLON, LBRACKET, RBRACKET, SPACE

// } Instance;

// const string IdName[] = {
//      "Keyword",
//      "Integer",
//      "Identifier",
//      "Operator",
//      "Delimiter",
//      "EoF",
//      "Error"
// };

*/