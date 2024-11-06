#include "func.h"
#include <cmath>

// Calculates the sum of the first n elements of the infinite series sqrt(1+x) Taylor expansion
double FuncClass::FuncA(int n){
	double result = 1;
	double x = 0.5;
	double term = x/2;

	for(int i = 1; i < n; ++i){
	result += term;
	term *= -x * (2 * i - 1)/(2 * i); // Taylor expansion formula for sqrt(1+x)
	}

	return result;
}
