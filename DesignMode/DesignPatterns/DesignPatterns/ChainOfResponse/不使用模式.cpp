//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//template <class T>
//string MyConvertToString(T value) {
//	stringstream ss;
//	ss << value;
//	return ss.str();
//}
//class FeeRequest {
//public:
//	string requestToPrjManager(double fee) {
//		string strTemp = "";
//		if (fee < 500) {
//			strTemp = prjHandle(fee);
//		}else if (fee < 1000) {
//			strTemp = depHandle(fee);
//		}else if (fee >= 1000) {
//			strTemp = CEOHandle(fee);
//		}
//		return strTemp;
//	}
//private:
////项目经理
//	string prjHandle(double fee) {
//		if (fee >= 0 && fee < 500) {
//			return "项目经理同意" + MyConvertToString(fee) + "金额";
//		}
//		else {
//			return "项目经理不同意" + MyConvertToString(fee) + "金额";
//		}
//	}
//
//	string depHandle(double fee) {
//		if (fee >= 500 && fee < 1000) {
//			return "部门经理同意" + MyConvertToString(fee) + "金额";
//		}
//		else {
//			return "部门经理不同意" + MyConvertToString(fee) + "金额";
//		}
//	}
//	
//	string CEOHandle(double fee) {
//		if (fee >= 1000) {
//			return "CEO同意" + MyConvertToString(fee) + "金额";
//		}
//		
//	}
//	
//};
//
//int main(void) {
//	FeeRequest* pRequest = new FeeRequest;
//	cout << pRequest->requestToPrjManager(300)<<endl;
//	cout << pRequest->requestToPrjManager(512) << endl;
//	cout << pRequest->requestToPrjManager(1024) << endl;
//	system("pause");
//	return 0;
//}
