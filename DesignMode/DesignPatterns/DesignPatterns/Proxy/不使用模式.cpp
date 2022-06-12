//#include <iostream>
//#include <string>
//#include <fstream>
//#include <sstream>
//#include <map>
//#include <vector>
//using namespace std;
//
////切分成log:
/////        故障名，故障时间，故障描述
/////map<int,vector<string>>:int 故障的序号，然后我们将这些（ 故障名|故障时间|故障描述）
//map<int, vector<string>> Logs;
////切分单行的输入，灌到logs对应的序号中
//vector<string> getBugs(string words) {
//	vector<string> results;
//	istringstream ss(words);
//	while (!ss.eof())
//	{
//		string word;
//		getline(ss, word, '|');
//		results.push_back(word);
//	}
//	return results;
//}
//
//bool getLogs() {
//	ifstream in("e:\\tmp\\故障列表.txt");
//	if (!in) {
//		cerr << "文件打开错误" << endl;
//		system("pause");
//		return -1;
//	}
//
//	string line;
//	int i = 0;
//	while (getline(in, line)) {
//		Logs[i]=getBugs(line);
//		i++;
//	}
//	in.close();
//
//	return 0;
//}
//
//int main(void) {
//	getLogs();//获取日志文件
//	for (int i = 0;i < Logs.size();i++) {
//		cout << "第" << i << "行是";
//		for (vector<string>::iterator iter = Logs[i].begin();iter != Logs[i].end();iter++) {
//			cout << (*iter) << " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}