#include<iostream>
#include<vector>
#include <array>
using namespace std;

class MyVecMngr {
public:
	MyVecMngr(vector<int> myVec) :m_myVec(myVec) {

	}
	void showItems() {
		for (int i = 0;i < m_myVec.size();i++) {
			cout << m_myVec.at(i) << endl;
		}
	}
private:
	vector<int> m_myVec;
};

//
class MyArrayMngr {
public:
	MyArrayMngr(array<int,20> myArr) :m_myArr(myArr) {

	}
	void showItems() {
		for (int i = 0;i <  m_myArr.size();i++) {
			cout << m_myArr.at(i) << endl;
		}
	}
private:
	array<int,20> m_myArr;
};

int main() {
	vector<int> myVec;
	myVec.push_back(1);
	myVec.push_back(2);
	myVec.push_back(3);

	for (auto iter = myVec.begin();iter != myVec.end();iter++) {
		cout << *iter << endl;
	}
	cout << "////////////////" << endl;
	array<int, 3> myArr;
	myArr[0] = 1;
	myArr[1] = 2;
	myArr[2] = 3;
	for (auto iter = myArr.begin();iter != myArr.end();iter++)
		cout << *iter << endl;
	system("pause");
	return 0;
}