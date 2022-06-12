#include "BinarayNode.h"

BinaryNode::BinaryNode(char c, class Express left1, class Express right1):opend(c),left(left1),right(right1) {

}

BinaryNode::~BinaryNode() {

}

void BinaryNode::print(ostream& os) const {
	os << "(" << left << opend << right << ")";
}

int BinaryNode::eval() const {
	int op1 = left.eval();
	int op2 = right.eval();
	if (opend == '+') return op1 + op2;
	if (opend == '-') return op1 - op2;
	if (opend == '*') return op1*op2;
	if (opend == '/' && op2 != 0) return op1 / op2;
	throw "error,二叉归并向上中的根操作符不正确";
}