//#include <iostream>
//using namespace std;
//class ThreePhaseOutlet {
//public:
//	void doThreePhasePlug() {
//		cout << "三相插头接入" << endl;
//	}
//};
//
//class TwoPhaseOutlet {
//public:
//	virtual void doPlug() = 0;
//};
//
//class OutletConverter :public TwoPhaseOutlet, public ThreePhaseOutlet {
//public:
//	void doPlug() {
//		doConvertor();
//		doThreePhasePlug();
//	}
//	void doConvertor() {
//		cout << "我们正在将三相插头转为两相插头" << endl;
//	}
//};
//
////对象适配，它可以更加灵活一些
//class OutletObjConvertor :public TwoPhaseOutlet {
//public:
//	OutletObjConvertor(ThreePhaseOutlet* pOut) :m_pOut(pOut) {
//
//	}
//	void doPlug() {
//		doConvert();
//		m_pOut->doThreePhasePlug();
//	}
//	void doConvert() {
//		cout << "我们正在对一个二相插头本身进行转化" << endl;
//	}
//private:
//	ThreePhaseOutlet* m_pOut;
//};
//
//int main(void) {
//	/*TwoPhaseOutlet* pOutlet = new OutletConverter();
//	pOutlet->doPlug();*/
//	TwoPhaseOutlet* pOutlet = new OutletObjConvertor(new ThreePhaseOutlet);
//	pOutlet->doPlug();
//	system("pause");
//	return 0;
//}