//
// Created by austi_eef6ewn on 9/15/2022.
//

#ifndef PROJECT1_STARTER_CODE_STRINGAUTOMATON_H
#define PROJECT1_STARTER_CODE_STRINGAUTOMATON_H

#include "Automaton.h"

class StringAutomaton : public Automaton
{
public:
	StringAutomaton() : Automaton(TokenType::STRING) {}  // Call the base constructor

	void S0(const std::string& input) {
		if (input[index] == '\'') {
			inputRead++;
			index++;
			S1(input);
		} else {
			Serr();
		}
	}

	void S1(const std::string& input) {
		if (input[index] == '\'') {
			inputRead++;
			index++;
			S2(input);
		} else if(input[index] == EOF) {
			Serr();
		} else {
			inputRead++;
			index++;
			S1(input);
		}
	}

	void S2(const std::string& input) {		//FIXME not const to be able to erase the second apostrophe
		if (input[index] == '\'') {
			inputRead++;
			index++;
			S1(input);	//FIXME The problem is that the ' char is not being erased and it keeps the index the index the same so the second ' is being read in twice
		}
	}
};

#endif //PROJECT1_STARTER_CODE_STRINGAUTOMATON_H
