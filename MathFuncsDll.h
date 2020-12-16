#pragma once
// MathFuncsDll.h
#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport)
#else
#define MATHFUNCSDLL_API __declspec(dllimport)
#endif
namespace MathFuncs
{
	// This class is exported from the MathFuncsDll.dll
	class MyMathFuncs
	{
	public:
		// Returns square area of a rectangle
		static MATHFUNCSDLL_API double S(double a, double b);
		// Returns perimeter of a rectangle
		static MATHFUNCSDLL_API double P(double a, double b);
		
	};
}
