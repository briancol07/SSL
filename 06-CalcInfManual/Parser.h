#ifndef PARSER_H
#define PARSER_H

#include "Scanner.h"

typedef enum {
    INITIAL,
    IN_NUMBER,
    IN_VARIABLE,
    IN_OPERATOR
} ParserState;

int valid_state(ParserState s, Token t);
ParserState get_state(Token t);
int parse();

#endif