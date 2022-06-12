#pragma once
#include <iostream>
using namespace std;
class ExpressNode {
public:
	friend class Express;
	int getUse(void) const;
	void setUse(int);
	friend ostream& operator<<(ostream &os, const ExpressNode& ExprNode) {
		//s输出表达式自身
		ExprNode.print(os);
		return os;
	}
	ExpressNode(void) :use(1){}
	~ExpressNode();
protected:
	virtual void print(ostream& os) const = 0;
	virtual int eval() const = 0;
private:
	int use;
};