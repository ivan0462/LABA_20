// compile with: /EHsc /link MathFuncsDll.lib
#include <iostream>
#include "MathFuncsDll.h"
using namespace std;
int main()
{

	double a = 4;
	int b = 5;
	cout << "S(rectangle) = " <<
		MathFuncs::MyMathFuncs::S(a, b) << endl;
	cout << "P(rectangle) = " <<
		MathFuncs::MyMathFuncs::P(a, b) << endl;
}
