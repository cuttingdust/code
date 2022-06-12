#include <iostream>
#include <string>
using namespace std;

//访问者模式：核心叫做双重分发：两个多态：accept，visit

class XiaoMi;
class HuaWei;
class Oppo;
class CellPhoneVisitor {
public:
	virtual void visit(XiaoMi* p) = 0;
	virtual void visit(HuaWei* p) = 0;
	virtual void visit(Oppo* p) = 0;
protected:
	CellPhoneVisitor(){}
};


class CellPhone {
public:
	virtual void dial() = 0;
	virtual void sendMsg() = 0;
	virtual void hang() = 0;
	virtual void recvMsg() = 0;
	virtual void accept(CellPhoneVisitor* p) = 0;
	//Solaris系统-->
	//Win7/win10
	//Mac
protected:
	CellPhone(){}
};

class XiaoMi :public CellPhone {
public:
	void dial() { cout << "小米" << "在拨号" << endl; }
	void sendMsg() { cout << "小米" << "在发短信" << endl; }
	void hang() { cout << "小米" << "在关断电话" << endl; }
	void recvMsg() { cout << "小米" << "在收短信" << endl; }
	void accept(CellPhoneVisitor* p) {
		p->visit(this);
	}
};

class HuaWei :public CellPhone {
public:
	void dial() { cout << "HuaWei" << "在拨号" << endl; }
	void sendMsg() { cout << "HuaWei" << "在发短信" << endl; }
	void hang() { cout << "HuaWei" << "在关断电话" << endl; }
	void recvMsg() { cout << "HuaWei" << "在收短信" << endl; }
	void accept(CellPhoneVisitor* p) {
		p->visit(this);
	}
};

class Oppo :public CellPhone {
public:
	void dial() { cout << "Oppo" << "在拨号" << endl; }
	void sendMsg() { cout << "Oppo" << "在发短信" << endl; }
	void hang() { cout << "Oppo" << "在关断电话" << endl; }
	void recvMsg() { cout << "Oppo" << "在收短信" << endl; }
	void accept(CellPhoneVisitor* p) {
		p->visit(this);
	}
};

class SolarisConfigure : public CellPhoneVisitor {
public:
	void visit(XiaoMi *p) {
		p->dial();
		p->hang();
		p->sendMsg();
		p->recvMsg();
	}

	void visit(HuaWei *p) {
		p->dial();
		p->hang();
		p->sendMsg();
		p->recvMsg();
	}
	void visit(Oppo *p) {
		p->dial();
		p->hang();
		p->sendMsg();
		p->recvMsg();
	}
};

int main(void) {
	CellPhoneVisitor* pVisitor = new SolarisConfigure;
	XiaoMi* pXiaoMi = new XiaoMi;
	HuaWei* pHuaWei = new HuaWei;
	Oppo* pOppo = new Oppo;
	cout << "将Solairs环境配置给XiaoMi" << endl;
	pXiaoMi->accept(pVisitor);
	cout << "将Solairs环境配置给HuaWei" << endl;
	pHuaWei->accept(pVisitor);
	cout << "将Solairs环境配置给Oppo" << endl;
	pOppo->accept(pVisitor);
	system("pause");
	return 0;
}