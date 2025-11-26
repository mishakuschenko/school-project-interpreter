#ifndef CORE_LEXER_TOKEN_H
#define CORE_LEXER_TOKEN_H

#include <string>

#include "../../../include/core/lexer/token_type.h"

typedef struct {
    TokenType type;
    std::string value;
} Token;

#endif // CORE_LEXER_TOKEN_H
