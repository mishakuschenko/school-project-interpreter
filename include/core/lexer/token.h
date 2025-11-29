#ifndef CORE_LEXER_TOKEN_H
#define CORE_LEXER_TOKEN_H

#include <cstddef>
#include <string>

#include "../../../include/core/lexer/token_type.h"

typedef struct
{
    TokenType type;
    std::string value;
    std::size_t line;
    std::size_t column;
    std::size_t position;
} Token;

#endif // CORE_LEXER_TOKEN_H
