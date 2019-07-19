// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include <tree_sitter/parser.h>
#include <wctype.h>

enum TOKEN_TYPE {
    STATEMENT_TERMINATOR
};

/* --- API --- */

void *tree_sitter_PowerShell_external_scanner_create();

void tree_sitter_PowerShell_external_scanner_destroy(void *p);

unsigned tree_sitter_PowerShell_external_scanner_serialize(void *payload, char *buffer);

void tree_sitter_PowerShell_external_scanner_deserialize(void *payload, const char *buffer, unsigned length);

bool tree_sitter_PowerShell_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols);

/* --- Internal Functions --- */

static void consume(TSLexer *lexer)
{
    lexer->advance(lexer, /* skip */ false);
}

static bool scan_statement_terminator(void *payload, TSLexer *lexer, const bool *valid_symbols)
{
    lexer->result_symbol = STATEMENT_TERMINATOR;

    // This token has no characters -- everything is lookahead to determine its existence
    lexer->mark_end(lexer);

    switch (lexer->lookahead)
    {
        case ';':
            consume(lexer);
            lexer->mark_end(lexer);

        case '\0':
        case '\n':
        case '}':
        case ')':
            return true;
    }

    return false;
}

/* --- API Implementation --- */

bool tree_sitter_PowerShell_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols)
{
    return scan_statement_terminator(payload, lexer, valid_symbols);
}

void *tree_sitter_PowerShell_external_scanner_create()
{
    return NULL;
}

void tree_sitter_PowerShell_external_scanner_destroy(void *p)
{
}

unsigned tree_sitter_PowerShell_external_scanner_serialize(void *payload, char *buffer)
{
    return 0;
}

void tree_sitter_PowerShell_external_scanner_deserialize(void *payload, const char *buffer, unsigned length)
{
}
