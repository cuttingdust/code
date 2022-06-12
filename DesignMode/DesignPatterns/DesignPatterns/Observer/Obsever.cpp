#include <iostream>
#include <vector>
#include <string>
using namespace std;

///抽象一个Subject主题
///观察者
class Observer {
public:
	virtual void update(string m_Temp, string m_Humi) = 0;
protected:
	Observer() {}
};
class Subject {
public:
	virtual void registerObserver(Observer* pObj)=0;
	virtual void removeObserver(Observer* pObj)=0;
	virtual void noitfyObserver()=0;
protected:
	Subject(){}
};

class WeatherData :public Subject {
public:
	WeatherData(string Temp, string Humi) : m_Temp(Temp), m_Humi(Humi) {
	}
	void registerObserver(Observer* pObj) {
		m_observers.push_back(pObj);
	}
	void removeObserver(Observer* pObj) {
		auto iter = find(m_observers.begin(), m_observers.end(), pObj);
		if (iter != m_observers.end()) {
			m_observers.erase(iter);
		}
	}
	void noitfyObserver() {
		//逐个遍历调用Observer的update方法
		for (vector<Observer*>::iterator iter = m_observers.begin();iter != m_observers.end();iter++) {
			(*iter)->update(m_Temp, m_Humi);
			
		}
	}

	void setData(string Temp, string Humi) {
		m_Temp = Temp;
		m_Humi = Humi;
		noitfyObserver();
	}
private:
	vector<Observer*> m_observers;
	string m_Temp;//温度
	string m_Humi;//湿度
};




//CocreteObserver
class PCDisplay:public Observer {
public:
	void update(string m_Temp, string m_Humi) {
		cout << "我是PC端的显示GUI,当前的温度为" << m_Temp << "湿度为" << m_Humi << endl;
	}

	PCDisplay(WeatherData* pWeatherData) {
		m_pWeatherData = pWeatherData;
		m_pWeatherData->registerObserver(this);
	}
private:
	WeatherData* m_pWeatherData;
};



class MobileDisplay :public Observer {
public:
	void update(string m_Temp, string m_Humi) {
		cout << "我是Mobile端的显示GUI,当前的温度为" << m_Temp << "湿度为" << m_Humi << endl;
	}

	MobileDisplay(WeatherData* pWeatherData) {
		m_pWeatherData = pWeatherData;
		m_pWeatherData->registerObserver(this);
	}
private:
	WeatherData* m_pWeatherData;
};


int main(void) {
	WeatherData* pWD = new WeatherData("22C", "65%");
	PCDisplay* pPCDisplay = new PCDisplay(pWD);
	MobileDisplay* pMobile = new MobileDisplay(pWD);

	pWD->setData("38C", "55%");
	pWD->removeObserver(pMobile);
	pWD->setData("31", "44%");
	
	system("pause");
	return 0;
}