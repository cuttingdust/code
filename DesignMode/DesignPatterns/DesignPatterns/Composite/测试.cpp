#include "ExpressNode.h"
#include "ValueNode.h"
#include "UnaryNode.h"
#include "BinarayNode.h"
#include "Express.h"

int main(void) {
	Express t = Express(3);
	t = Express('+', t, 12);
	cout << t << "=" << t.eval() << endl;
	Express y = Express('-', 4);
	cout << y << "=" << y.eval() << endl;
	Express t1 = Express('*', Express('-', 5), Express('+', 3, 4));
	cout << t1 << "=" << t1.eval() << endl;

	system("pause");
	return 0;
}