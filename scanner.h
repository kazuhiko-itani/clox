#ifndef clox_scanner_h
#define clox_scanner_h

typedef enum
{
    // Single-character tokens.
    TOKEN_LEFT_PAREN,
    TOKEN_RIGHT_PAREN,
    TOKEN_LEFT_BRACE,
    TOKEN_RIGHT_BRACE,
    TOKEN_LEFT_BRACKET,
    TOKEN_RIGHT_BRACKET,
    TOKEN_COMMA,
    TOKEN_DOT,
    TOKEN_MINUS,
    TOKEN_PLUS,
    TOKEN_SEMICOLON,
    TOKEN_COLON,
    TOKEN_SLASH,
    TOKEN_STAR,
    TOKEN_PERCENT,
    TOKEN_CARET,
    TOKEN_TILDE,
    TOKEN_QUESTION,

    // One or two character tokens.
    TOKEN_BANG,
    TOKEN_BANG_EQUAL,
    TOKEN_EQUAL,
    TOKEN_EQUAL_EQUAL,
    TOKEN_GREATER,
    TOKEN_GREATER_EQUAL,
    TOKEN_LESS,
    TOKEN_LESS_EQUAL,
    TOKEN_PLUS_PLUS,
    TOKEN_MINUS_MINUS,
    TOKEN_PLUS_EQUAL,
    TOKEN_MINUS_EQUAL,
    TOKEN_STAR_EQUAL,
    TOKEN_SLASH_EQUAL,
    TOKEN_PERCENT_EQUAL,
    TOKEN_CARET_EQUAL,
    TOKEN_AMPERSAND,
    TOKEN_AMPERSAND_EQUAL,
    TOKEN_PIPE,
    TOKEN_PIPE_EQUAL,
    TOKEN_PIPE_PIPE,
    TOKEN_AMPERSAND_AMPERSAND,
    TOKEN_LESS_LESS,
    TOKEN_LESS_LESS_EQUAL,
    TOKEN_GREATER_GREATER,
    TOKEN_GREATER_GREATER_EQUAL,

    // Literals.
    TOKEN_IDENTIFIER,
    TOKEN_STRING,
    TOKEN_NUMBER,

    // Keywords.
    TOKEN_AND,
    TOKEN_BREAK,
    TOKEN_CLASS,
    TOKEN_CONTINUE,
    TOKEN_ELSE,
    TOKEN_FALSE,
    TOKEN_FOR,
    TOKEN_FUN,
    TOKEN_IF,
    TOKEN_NIL,
    TOKEN_OR,
    TOKEN_PRINT,
    TOKEN_RETURN,
    TOKEN_SUPER,
    TOKEN_THIS,
    TOKEN_TRUE,
    TOKEN_VAR,
    TOKEN_WHILE,
    TOKEN_ENUM,
    TOKEN_SWITCH,
    TOKEN_CASE,
    TOKEN_DEFAULT,
    TOKEN_DO,
    TOKEN_GOTO,
    TOKEN_CONST,
    TOKEN_STATIC,
    TOKEN_EXTERN,
    TOKEN_UNION,
    TOKEN_STRUCT,
    TOKEN_TYPEDEF,
    TOKEN_SIZEOF,
    TOKEN_ALIGNOF,
    TOKEN_OFFSETOF,
    TOKEN_IFDEF,
    TOKEN_IFNDEF,
    TOKEN_ELIF,
    TOKEN_ELSEIF,
    TOKEN_ENDIF,
    TOKEN_INCLUDE,
    TOKEN_DEFINE,
    TOKEN_UNDEF,
    TOKEN_PRAGMA,
    TOKEN_ERROR,
    TOKEN_WARNING,
    TOKEN_LINE,
    TOKEN_IMPORT,
    TOKEN_MODULE,
    TOKEN_EXPORT,
    TOKEN_ASM,
    TOKEN_ASM_END,
    TOKEN_ASM_VOLATILE,
    TOKEN_ASM_INLINE,
    TOKEN_ASM_OUTPUT,
    TOKEN_ASM_INPUT,
    TOKEN_ASM_CLOBBER,
    TOKEN_ASM_ALIGN,
    TOKEN_ASM_BSS,
    TOKEN_ASM_DATA,
    TOKEN_ASM_TEXT,
    TOKEN_ASM_GLOBAL,
    TOKEN_ASM_EXTERN,
    TOKEN_ASM_SECTION,
    TOKEN_ASM_TYPE,
    TOKEN_ASM_SIZE,

    TOKEN_EOF
} TokenType;

typedef struct
{
    TokenType type;
    const char *start;
    int length;
    int line;
} Token;

void initScanner(const char *source);
Token scanToken();

#endif