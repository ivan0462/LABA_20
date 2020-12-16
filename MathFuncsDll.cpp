#include "pch.h"
#include "MathFuncsDll.h"
#include <stdexcept>
using namespace std;
namespace MathFuncs
{
	
	double MyMathFuncs::S(double a, double b)
	{
		return a * b;
	}
	double MyMathFuncs::P(double a, double b)
	{
		return a * 2 + b * 2;
	}
}
