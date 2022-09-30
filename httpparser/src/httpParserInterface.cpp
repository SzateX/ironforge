//
// Created by jaksz on 29.09.2022.
//

#include "httpParserInterface.h"
#include "antlr4-runtime.h"
#include "httpLexer.h"
#include "httpParser.h"
#include "HttpParserVisitor.h"

extern "C" {
    void parse(const char* data) {
        antlr4::ANTLRInputStream input(data);
        httpLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        httpParser parser(&tokens);
        antlr4::tree::ParseTree* tree = parser.http_message();
        HttpParserVisitor visitor;
        visitor.visit(tree);
    }
}