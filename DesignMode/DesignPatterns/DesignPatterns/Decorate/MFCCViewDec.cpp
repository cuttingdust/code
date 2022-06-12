#include <iostream>
#include <windows.h>
using namespace std;

class CView {
public:
	virtual void Draw(void){}
};

//抽象装饰类
class CDecorate :public CView {
public:
	CDecorate(CView *pView):m_pView(pView){}
	virtual void Draw(void) {
		m_pView->Draw();
	}

private:
	CView* m_pView;
};

class CScrollBars :public CDecorate {
public:
	CScrollBars(CView *pView):CDecorate(pView){}
protected:
	//绘制滚动条
	void DrawScrollBars() {
		cout << ">绘制了一个滚动条" << endl;
	}
public:
	virtual void Draw() {
		CDecorate::Draw();
		DrawScrollBars();
	}
};

class CBorder :public CDecorate {
public:
	CBorder(CView *pView) :CDecorate(pView) {}
protected:
	//绘制滚动条
	void DrawBorder() {
		cout << ">绘制了一个边框" << endl;
	}
public:
	virtual void Draw() {
		CDecorate::Draw();
		DrawBorder();
	}
};

//context->主要的被装饰对象
class CTextView :public CView {
public:
	CTextView(char* s) {
		SetWindowText(s);
	}
protected:
	virtual void DrawTextView() {
		cout << ">绘制了一个文本视图,文本的内容为" << m_Text;
	}
protected:
	char m_Text[MAX_PATH];

public:
	virtual void Draw() {
		CView::Draw();
		DrawTextView();
	}

	void SetWindowText(char* s) {
		strcpy_s(m_Text, _countof(m_Text), s);
	}

	char* GetWindowText() {
		return m_Text;
	}
};

class CWindows {
public:
	CWindows() {
		ZeroMemory(m_arrWindow, sizeof(CView*) * 10);
	}
	void Draw(){
		for (int i = 0;i < 10;i++) {
			if (m_arrWindow[i] != NULL)
				m_arrWindow[i]->Draw();
		}
	}

	void AddControl(CView* pView) {
		for (int i = 0;i < 10;i++) {
			if (m_arrWindow[i] == NULL){
				m_arrWindow[i] = pView;
				break;
			}
		}
	}

	void RemoveControl(CView* pView) {
		for (int i = 0;i < 10;i++) {
			if (m_arrWindow[i] == pView) {
				m_arrWindow[i] = NULL;
				break;
			}
		}
	}
protected:
	CView* m_arrWindow[10];

};

int main(void) {
	//定义一个窗口对象
	CWindows windowsObj;
	//定义一个普通的文本视图
	CTextView TextView("我是一个文本视图");

	windowsObj.AddControl(&TextView);
	windowsObj.Draw();
	cout << "*****************" << endl;
	windowsObj.RemoveControl(&TextView);
	CScrollBars* pScroll = new CScrollBars(&TextView);
	windowsObj.AddControl(pScroll);
	windowsObj.Draw();
	cout << "*****************" << endl;
	windowsObj.RemoveControl(pScroll);
	CBorder *pBorder = new CBorder(&TextView);
	windowsObj.AddControl(pBorder);
	windowsObj.Draw();
	system("pause");
	return 0;
}