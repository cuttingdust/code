///*
//AOP:叫面向方面（切面）编程
//在我们的日常开发中，我们经常会遇到这样的一类与业务逻辑无关
//的开发，正交化
//打log，将log进入织入我们的业务场景
//*/
//#include <memory>
//#include <string>
//#include <iostream>
//using namespace std;
//
//class IHello {
//public:
//	IHello(){}
//	virtual ~IHello()
//	{
//
//	}
//	virtual void Output(const string& str){}
//};
//
//class Hello :public IHello {
//public:
//	void Output(const string& str) override {
//		cout << str << endl;
//	}
//};
//
//class HelloProxy :public IHello {
//public:
//	HelloProxy(IHello *p) :m_ptr(p) {
//
//	}
//	~HelloProxy(){
//		delete m_ptr;
//		m_ptr = nullptr;
//	}
//
//	void Output(const string& str) final {
//		cout << "在真正的对象执行之前，进行拦截" << endl;
//		m_ptr->Output(str);
//		cout << "在真正的对象执行之后，进行拦截" << endl;
//	}
//private:
//	IHello* m_ptr;
//};
//
//int main(void) {
//	std::shared_ptr<IHello> hello = std::make_shared<HelloProxy>(new Hello());
//	hello->Output("AOP 测试");
//	system("pause");
//	return 0;
//}