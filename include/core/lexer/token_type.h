#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

enum class TokenType
{
    LET,
    IF,
    ELSE,
    WHILE,
    FOR,
    DEF,
    RETURN,

    IDENTIFIER,
    NUMBER,
    STRING,

    PLUS,
    MINUS,
    MULTIPLY,
    DIVIDE,
    ASSIGN,
    EQUALS,
    NOT_EQUALS,
    LESS,
    LESS_EQUAL,
    GREATER,
    GREATER_EQUAL,

    LEFT_PAREN,
    RIGHT_PAREN,
    LEFT_BRACE,
    RIGHT_BRACE,
    COMMA,
    SEMICOLON,


    END_OF_FILE,
    UNKNOWN
};

#endif // TOKEN_TYPE_H
