#include "Express.h"
#include "UnaryNode.h"

UnaryNode::UnaryNode(char c, class Express left1) :opend(c), left(left1) {

}

UnaryNode::~UnaryNode(void) {

}

void UnaryNode::print(std::ostream &os)const {
	os << "(" << opend << left << ")";
}

int UnaryNode::eval() const {
	if (opend == '-')
		return (-1)*left.eval();
	throw "error, ÓÐ´íÎóµÄ²Ù×÷·û";
}