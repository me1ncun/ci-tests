#include <cassert>
#include <cmath>
#include <stdio.h>
#include "../func.h"

void testFuncA()
{
	FuncClass obj;
	double result = obj.FuncA(3);

	double expected = 1.1875;
	double tolerance = 1e-4;

	assert(fabs(result-expected) < tolerance);
}

int main()
{
	testFuncA();
	return 0;
}
