//
// Created by austi_eef6ewn on 9/28/2022.
//

#ifndef PROJECT1_STARTER_CODE_RULE_H
#define PROJECT1_STARTER_CODE_RULE_H

#include "Predicate.h"
#include <vector>

class Rule {
public:
	std::string toString() {
		std::string outputString = "";
		outputString.append(headPredicate->toString()) + " :- ";
		for(int i = 0; i < bodyPredicates.size(); ++i) {
			outputString.append(bodyPredicates.at(i)->toString());
			if(i < bodyPredicates.size() - 1) {
				outputString.append(",");
			}
		}
		outputString.append(".");

		return outputString;
	}
private:
	Predicate* headPredicate;
	std::vector<Predicate*> bodyPredicates;
};


#endif //PROJECT1_STARTER_CODE_RULE_H
