#include "../../../include/core/lexer/lex.h"
#include "../../../include/core/lexer/token_type.h"

#include <cstddef>
#include <vector>
#include <unordered_map>


static std::unordered_map<std::string, TokenType> keywords
{
    { "let",     TokenType::LET    },
    { "def",     TokenType::DEF    },
    { "if",      TokenType::IF     },
    { "else",    TokenType::ELSE   },
    { "while",   TokenType::WHILE  },
    { "for",     TokenType::FOR    },
    { "return",  TokenType::RETURN },
};


static inline Token token
(
    TokenType type,
    std::string value,
    size_t line,
    size_t column
)
{
    return Token {type, value, line, column};
}


std::vector<Token> lex
(
    const std::string& input
)
{
    std::vector<Token> tokens;

    size_t len = input.length();
    size_t position = 0;
    size_t line = 1;
    size_t column = 1;
    size_t start = 0;

    char current;

    // implement lexer loool

    while(position < len)
    {
        start = position;
        current = input[position];

        break; // TODO: Implement lexer logic and remove this
    }

    tokens.push_back(
        token(
            TokenType::END_OF_FILE,
            "",
            line,
            column
        )
    );

    return tokens;
}
