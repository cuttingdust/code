//#include <iostream>
//#include <string>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//template<class T>
//string ConvertToString(T value) {
//	stringstream ss;
//	ss << value;
//	return ss.str();
//}
//
//class ExportHeaderModel {
//public:
//	ExportHeaderModel(string strDepId, string strExportDate) : m_strDepId(strDepId), m_strExportDate(strExportDate) {
//
//	}
//	string getDepId() {
//		return m_strDepId;
//	}
//	string getExportDate() {
//		return m_strExportDate;
//	}
//private:
//	string m_strDepId;//对账单的部门id
//	string m_strExportDate;//对账单的导出日期
//};
//
//
//class ExportDataModel {
//public:
//	ExportDataModel(string strTransId, double Quantity) : m_strTransId(strTransId), m_Quantity(Quantity) {
//
//	}
//	string getTransId() {
//		return m_strTransId;
//	}
//	double getQuantity() {
//		return m_Quantity;
//	}
//private:
//	string m_strTransId;//交易Id
//	double m_Quantity;
//};
//
//class ExportFooterModel {
//public:
//	ExportFooterModel(string exportUser): m_exportUser(exportUser){}
//	string getExportUser() {
//		return m_exportUser;
//	}
//private:
//	string m_exportUser;
//};
//
////考虑到我们在一个对账周期，可能有多笔的交易记录，我们用vecter
//
//class ExportToTxtHelper {
//public:
//	void doExport(ExportHeaderModel& ehm, vector < ExportDataModel*>& edmCollection, ExportFooterModel& efm);
//};
//
//void ExportToTxtHelper::doExport(ExportHeaderModel& ehm, vector < ExportDataModel*>& edmCollection, ExportFooterModel& efm) {
//	//用一个字符串拼接
//	string strTemp = "";
//	//第一步：写文件头
//	strTemp += ehm.getDepId() + "," + ehm.getExportDate() + "\n";
//	//第二步：写文件体数据
//	for (vector<ExportDataModel*>::iterator iter = edmCollection.begin();iter != edmCollection.end();iter++) {
//		strTemp += (*iter)->getTransId() + ":" + ConvertToString((*iter)->getQuantity()) + "\n";
//	}
//	//第三步：拼接文件尾部
//	strTemp += efm.getExportUser() + "\n";
//	cout << strTemp;
//}
//
//class ExportToXmlHelper {
//public:
//	void doExport(ExportHeaderModel& ehm, vector < ExportDataModel*>& edmCollection, ExportFooterModel& efm);
//
//};
//void ExportToXmlHelper::doExport(ExportHeaderModel& ehm, vector < ExportDataModel*>& edmCollection, ExportFooterModel& efm) {
//	string strTemp = "";
//	//第一步拼接头
//	strTemp.append("<?xml version='1.0' encoding='utf-8'>\n");
//	strTemp.append("<Receipt>\n");
//	strTemp.append("    <Header>\n");
//	strTemp.append("        <DepId>");
//	strTemp.append(ehm.getDepId() + "</DepId>\n");
//	strTemp.append("        <ExportDate>" + ehm.getExportDate() + "</ExportDate>\n");
//	strTemp.append("    </Header>\n");
//	//第二步构建数据体
//	strTemp.append("    <Body>\n");
//	for (vector<ExportDataModel*>::iterator iter = edmCollection.begin();iter != edmCollection.end();iter++) {
//		strTemp.append("        <id>" + (*iter)->getTransId() + "</id>\n");
//		strTemp.append("        <amount>" + ConvertToString((*iter)->getQuantity()) + "</amount>\n");
//	}
//	strTemp.append("    </Body>\n");
//	//第三:拼接文件尾部
//	strTemp.append("    <Footer>\n");
//	strTemp.append("        <ExportUser>" + efm.getExportUser() + "</ExportUser>\n");
//	strTemp.append("    </Footer>\n</Receipt>\n");
//	cout << strTemp;
//}
//
//
//int main(void) {
//	ExportHeaderModel* pEhm = new ExportHeaderModel("南京1支行", "6月1日");
//	ExportDataModel* pEdm = new ExportDataModel("1", 10000.00f);
//	ExportDataModel* pEdm2 = new ExportDataModel("2", 20000.00f);
//	vector<ExportDataModel*> myVec;
//	myVec.push_back(pEdm);
//	myVec.push_back(pEdm2);
//	ExportFooterModel* pEfm = new ExportFooterModel("xcj");
//
//	//ExportToTxtHelper helper;
//	ExportToXmlHelper helper;
//	helper.doExport(*pEhm, myVec, *pEfm);
//	system("pause");
//	return 0;
//}
