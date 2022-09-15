#include "Token.h"

Token::Token(TokenType type, std::string description, int line) {
    // Initialize all member variables
	this->type = type;
	this->description = description;
	this->lineNumber = line;
}

//FIXME test if this works
std::string Token::TokenTypeToString(TokenType type) {
	switch(type) {
		case TokenType::COMMA:
			return "COMMA";
			break;        //FIXME syntax good?
		case TokenType::PERIOD:
			return "PERIOD";
			break;
		case TokenType::Q_MARK:
			return "Q_MARK";
			break;
		case TokenType::LEFT_PAREN:
			return "LEFT_PAREN";
			break;
		case TokenType::RIGHT_PAREN:
			return "RIGHT_PAREN";
			break;
		case TokenType::COLON:
			return "COLON";
			break;
		case TokenType::COLON_DASH:
			return "COLON_DASH";
			break;
		case TokenType::MULTIPLY:
			return "MULTIPLY";
			break;
		case TokenType::ADD:
			return "ADD";
			break;
		case TokenType::SCHEMES:
			return "SCHEMES";
			break;
		case TokenType::FACTS:
			return "FACTS";
			break;
		case TokenType::RULES:
			return "RULES";
			break;
		case TokenType::QUERIES:
			return "QUERIES";
			break;
		case TokenType::ID:
			return "ID";
			break;
		case TokenType::STRING:
			return "STRING";
			break;
		case TokenType::COMMENT:
			return "COMMENT";
			break;
		case TokenType::UNDEFINED:
			return "UNDEFINED";
			break;
		case TokenType::EOF_TOKEN:
			return "EOF";
			break;        //FIXME make sure EOF is correct
	}
}

void Token::toString() {
	// Format: (COLON_DASH,":-",6)
	std::cout << "(" << TokenTypeToString(this->type) << ",\"" << this->description << "\"," << this->lineNumber << ")" << std::endl;
}
