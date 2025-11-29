#ifndef CORE_LEXER_LEX_H
#define CORE_LEXER_LEX_H

#include <vector>

#include "../../../include/core/lexer/token.h"

namespace lexer
{

std::vector<Token> lex
(
    const std::string& source
);

}

#endif // CORE_LEXER_LEX_H
