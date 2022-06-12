//#include <iostream>
//using namespace std;
//
////设计思想：我们父类和子类就是一个扩展的关系？是不是合适
////里氏代换原则：子类对象就应该能完全替代父类的行为
////对于继承这样设计，特别小心，我们：组合大于继承
////把quack和fly抽象成为一个对象，那么这个问题就了解决方案
//class Duck {
//public:
//	virtual void Quack() = 0;
//	virtual void Display() = 0;
//	virtual void fly() = 0;//fly(int), fly(object)......
//
//protected:
//private:
//};
//
//class DonaladDuck :public Duck {
//public:
//	void Quack() {
//		cout << "我是唐老鸭" << endl;
//	}
//	void Display() {
//		Quack();
//	}
//	void fly(int param) {
//		cout << "我是唐老鸭，虽然自身不会飞，但是我可以做飞机，做气球飞" << endl;
//	}
//};
////第一个困境：子类似乎不太那么像父类。。。
//class RuberDuck : public Duck {
//public:
//	void Quack() {
//		
//	}
//	void Display() {
//		Quack();
//	}
//};
//
//class WigeonDuck : public Duck {
//public:
//	void Quack() {
//		cout << "我是小野鸭" << endl;
//	}
//	void Display() {
//		Quack();
//	}
//	void fly() {
//		cout << "我在天空中自由翱翔" << endl;
//	}
//};