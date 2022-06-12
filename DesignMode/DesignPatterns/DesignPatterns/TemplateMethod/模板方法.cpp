#include <iostream>
using namespace std;

//PC机，手机，平板
class MakeOrder {
public:
	//virtual void startOrder() =0;第一版
	//钩子函数的模板方法
	virtual void startOrder() {
		cout << "下订单了" << endl;
	}
	virtual void replyStart()=0;
	//.....
	virtual void finishOrder()=0;
	virtual void replyFinish()=0;
	//模板模式
	void make() {
		startOrder();
		replyStart();
		finishOrder();
		replyFinish();
	}
protected:
	MakeOrder(){}
};

class Fanuc :public MakeOrder {
public:
	void startOrder() {
		cout << "Fanuc开始接受订单" << endl;
	}
	void replyStart() {
		cout << "Fanuc做好预备，请将后继订单进入排队" << endl;
	}
	//.....
	 void finishOrder() {
		 cout << "本次Fanuc订单已经完成，请推进下个订单进入生产" << endl;
	}
	 void replyFinish() {
		 cout << "Fanuc订单信号已经送达，即将推进下个订单进入生产" << endl;
	 }
};

class Sims :public MakeOrder {
public:
	void startOrder() {
		cout << "Sims开始接受订单" << endl;
	}
	void replyStart() {
		cout << "Sims做好预备，请将后继订单进入排队" << endl;
	}
	//.....
	void finishOrder() {
		cout << "本次Sims订单已经完成，请推进下个订单进入生产" << endl;
	}
	void replyFinish() {
		cout << "Sims订单信号已经送达，即将推进下个订单进入生产" << endl;
	}
};

class Mits :public MakeOrder {
public:
	
	void replyStart() {
		cout << "Sims做好预备，请将后继订单进入排队" << endl;
	}
	//.....
	void finishOrder() {
		cout << "本次Sims订单已经完成，请推进下个订单进入生产" << endl;
	}
	void replyFinish() {
		cout << "Sims订单信号已经送达，即将推进下个订单进入生产" << endl;
	}
};

int main(void) {
	//MakeOrder* pMakeOrder = new Fanuc;
	//pMakeOrder->make();
	MakeOrder* pMakeOrder = new Mits;
	pMakeOrder->make();
	system("pause");
	return 0;
}