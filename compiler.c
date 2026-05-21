#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Token types
typedef enum {
    TOKEN_INT, TOKEN_FLOAT, TOKEN_IDENTIFIER, TOKEN_KEYWORD,
    TOKEN_OPERATOR, TOKEN_EOF, TOKEN_UNKNOWN
} TokenType;

// Token structure
typedef struct {
    TokenType type;
    char* value;
} Token;

// Lexer (tokenizer) implementation
Token* tokenize(const char* source_code) {
    // Simplified tokenizer - in a real compiler this would be more complex
    Token* tokens = malloc(100 * sizeof(Token)); // Simple fixed size for demo
    int token_count = 0;
    int i = 0;
    
    while (source_code[i] != '\0') {
        // Skip whitespace
        if (isspace(source_code[i])) {
            i++;
            continue;
        }
        
        // Handle numbers (very simplified)
        if (isdigit(source_code[i])) {
            char num[100];
            int j = 0;
            while (isdigit(source_code[i]) || source_code[i] == '.') {
                num[j++] = source_code[i++];
            }
            num[j] = '\0';
            
            tokens[token_count].type = strchr(num, '.') ? TOKEN_FLOAT : TOKEN_INT;
            tokens[token_count].value = strdup(num);
            token_count++;
            continue;
        }
        
        // Handle identifiers and keywords
        if (isalpha(source_code[i])) {
            char ident[100];
            int j = 0;
            while (isalnum(source_code[i])) {
                ident[j++] = source_code[i++];
            }
            ident[j] = '\0';
            
            // Check if it's a keyword (very simplified)
            if (strcmp(ident, "int") == 0 || strcmp(ident, "float") == 0 || 
                strcmp(ident, "return") == 0) {
                tokens[token_count].type = TOKEN_KEYWORD;
            } else {
                tokens[token_count].type = TOKEN_IDENTIFIER;
            }
            tokens[token_count].value = strdup(ident);
            token_count++;
            continue;
        }
        
        // Handle operators (very simplified)
        if (strchr("+-*/=;{}()", source_code[i])) {
            char op[2] = {source_code[i++], '\0'};
            tokens[token_count].type = TOKEN_OPERATOR;
            tokens[token_count].value = strdup(op);
            token_count++;
            continue;
        }
        
        // Unknown token
        char unknown[2] = {source_code[i++], '\0'};
        tokens[token_count].type = TOKEN_UNKNOWN;
        tokens[token_count].value = strdup(unknown);
        token_count++;
    }
    
    // Add EOF token
    tokens[token_count].type = TOKEN_EOF;
    tokens[token_count].value = NULL;
    
    return tokens;
}

// Simple parser (just prints tokens for demonstration)
void parse(Token* tokens) {
    printf("Parsing tokens:\n");
    for (int i = 0; tokens[i].type != TOKEN_EOF; i++) {
        const char* type_str;
        switch (tokens[i].type) {
            case TOKEN_INT: type_str = "INTEGER"; break;
            case TOKEN_FLOAT: type_str = "FLOAT"; break;
            case TOKEN_IDENTIFIER: type_str = "IDENTIFIER"; break;
            case TOKEN_KEYWORD: type_str = "KEYWORD"; break;
            case TOKEN_OPERATOR: type_str = "OPERATOR"; break;
            default: type_str = "UNKNOWN"; break;
        }
        printf("Token: %s\tType: %s\n", tokens[i].value, type_str);
    }
}

// Simple code generator (just prints assembly-like output for demonstration)
void generate_code(Token* tokens) {
    printf("\nGenerated code:\n");
    printf("; Sample generated output (simplified)\n");
    printf("section .text\n");
    printf("global _start\n\n");
    printf("_start:\n");
    printf("    ; Your code would be generated here\n");
    printf("    mov eax, 1\n");
    printf("    int 0x80\n");
}

// Main compiler function
void compile(const char* source_code) {
    printf("Compiling...\n");
    
    // 1. Lexical analysis
    Token* tokens = tokenize(source_code);
    
    // 2. Syntax analysis
    parse(tokens);
    
    // 3. Code generation
    generate_code(tokens);
    
    // Free tokens
    for (int i = 0; tokens[i].type != TOKEN_EOF; i++) {
        free(tokens[i].value);
    }
    free(tokens);
}

int main() {
    // Sample C code to compile
    const char* sample_code = 
        "int main() {\n"
        "    int x = 5;\n"
        "    float y = 3.14;\n"
        "    return 0;\n"
        "}";
    
    compile(sample_code);
    
    return 0;
}