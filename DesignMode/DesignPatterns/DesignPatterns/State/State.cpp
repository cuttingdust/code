#include <iostream>
#include <string>
#include <map> //用户名，用户的下载
using namespace std;

class DownloadManager;
class DownState {
public:
	virtual void Down(string User, string DownItem, DownloadManager* p) = 0;
protected:
	DownState(){}
};

class NormalDownState :public DownState{
public:
	void Down(string User, string DownItem, DownloadManager* p) {
		cout << "欢迎您下载本资源" << endl;
	}
};
class RepeateDownState :public DownState {
public:
	void Down(string User, string DownItem, DownloadManager* p) {
		cout << "请不要重复下载" << endl;
	}
};

class SpiteDownState :public DownState {
public:
	void Down(string User, string DownItem, DownloadManager* p) {
		cout << "你有恶意下载的嫌疑，即将取消下载资格" << endl;
	}
};

class BlackDownState :public DownState {
public:
	void Down(string User, string DownItem, DownloadManager* p) {
		cout << "您的下载过于频繁，被列入黑名单，禁止登录本系统" << endl;
	}
};

class DownloadManager {
public:
	map<string, string> getMapDown() {
		return m_mapDown;
	}
	void Down(string User, string DownItem) {
		int oldDownCount = 0;
		if (m_mapDownCount.count(User) > 0) {
			oldDownCount = m_mapDownCount[User];
		}
		else {
			m_mapDownCount[User] = 0;
		}
		oldDownCount++;
		m_mapDownCount[User] = oldDownCount;
		if (oldDownCount == 1) {
			m_pState = new NormalDownState();
		}
		else if (oldDownCount > 1 && oldDownCount < 3) {
			m_pState = new RepeateDownState();
		}
		else if (oldDownCount >= 3 && oldDownCount < 5) {
			m_pState = new SpiteDownState();
		}
		else if (oldDownCount >= 5) {
			m_pState = new BlackDownState();
		}
		m_pState->Down(User, DownItem, this);
	}
private:
	DownState* m_pState;//持有状态处理对象
	map<string, string> m_mapDown;
	map<string, int> m_mapDownCount;
};

int main(void) {
	DownloadManager* pVM = new DownloadManager;
	for (int i = 0;i < 5;i++) {
		pVM->Down("dst", "设计模式完全手册C++语言描述");
	}
	system("pause");
	return 0;
}