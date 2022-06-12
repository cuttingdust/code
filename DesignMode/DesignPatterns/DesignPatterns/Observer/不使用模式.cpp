//#include <iostream>
//#include <string>
//using namespace std;
//
//class WeatherData {
//public:
//	void mearueDataChange() {
//		//将数据发送给若干显示的对象
//		m_pMoblie->update(m_Pressusre,m_Tempturare,m_Hummnity);
//		m_PCDisplay->update(m_Pressusre, m_Tempturare, m_Hummnity);
//	}
//private:
//	MobileDisplay* m_pMoblie;
//	PCDisplay* m_PCDisplay;
//	string m_Pressusre;
//	string m_Tempturare;
//	string m_Hummnity;
//};
//
//////用来显示的若干UI
//class MobileDisplay {
//public:
//	void update(string strPressure, string strTempturae, string strHummunity) {
//		cout << "压力是" << strPressure << "温度是" << strTempturae << "湿度是" << strHummunity << endl;
//	}
//};
//
//class PCDisplay {
//public:
//	void update(string strPressure, string strTempturae, string strHummunity) {
//		cout << "压力是" << strPressure << "温度是" << strTempturae << "湿度是" << strHummunity << endl;
//	}
//};
//
//int main(void) {
//	system("pause");
//	return 0;
//}