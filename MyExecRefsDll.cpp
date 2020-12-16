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
		
	//try
	//{
	//	cout << "a * 0 = " <<
	//		MathFuncs::MyMathFuncs::S(a, 0) << endl;
	//}
	//catch (const invalid_argument &e)
	//{
	//	cout << "Caught exception: " << e.what() << endl;
	//}
	//return 0;
}
