//#include <iostream>
//#include <string>
//using namespace std;
//
//class AbstractServer {
//public:
//	virtual void Request() = 0;
//protected:
//	AbstractServer(){}
//};
//
////真正的服务器
//class RealServer :public AbstractServer {
//public:
//	void Request() {
//		cout << "服务器启动" << endl;
//	}
//};
//
//class ProxyServer :public AbstractServer {
//public:
//	ProxyServer(string name, string pwd) :m_name(name), m_pwd(pwd) {
//		m_pServer = new RealServer;
//	}
//
//	//我和主题的RealProxy同样的接口
//	void Request() {
//		if ("admin" == m_name && "123" == m_pwd) {
//			cout << "请求成功" << endl;
//			cout << "代理服务器正在启动" << endl;
//			m_pServer->Request();
//			cout << "服务器请求完毕" << endl;
//		}
//
//		else {
//			cout << "用户名密码错误" << endl;
//		}
//
//	}
//private:
//	string m_name;
//	string m_pwd;
//private:
//	AbstractServer* m_pServer;
//}; 
//
//int main(void) {
//	AbstractServer* pProxy = new ProxyServer("admin", "123");
//	pProxy->Request();
//	system("pause");
//	return 0;
//}