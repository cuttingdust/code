#pragma once
#include "Express.h"
#include "ExpressNode.h"

class UnaryNode :public ExpressNode {
public:
	friend class Express;
	//UnaryNode(void);
	UnaryNode(char c, class Express left1);
	~UnaryNode();
private:
	void print(ostream& os) const;
	int eval() const;
	char opend;
	class Express left;
};