#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int x,y;
	x = 3;
	y = 8;
	cout << y/x << "\n";
	/* NOTE: fractional part is lost.  Division of integers
	 * will always round down to the nearest. */

	/* Regarding the use of integers as booleans: */
	if (x) {
		cout << "I guess " << x << " is true\n";
	} else {
		cout << x << " is false\n";
	}
	/* Dangerous consequence (classic footgun) */
	printf("x = %i\ny = %i\n",x,y);
	if (y = x) {
		cout << "y was equal to x\n";
	} else {
		cout << "x and y were different\n";
	}
	printf("x = %i\ny = %i\n",x,y);
	/* explanation of the above:
	 * 1. We used assignment "x=y" instead of equality "x==y".
	 * 2. Assignment statements have a value!  You get whatever
	 *    the right hand side was.  NOTE: this actually makes some
	 *    sense: note that x = y = z would be parsed as x = (y = z)
	 * 3. Integers can be interpreted as booleans using the convention
	 *    0 is false and anytyhing else is true. */

	/* typecasting example:
	 * Say we wanted to divide a and b and get the decimal expansion: */
	int a=3,b=8;
	cout << (double)a/b << "\n";
	return 0;
}

// vim:foldlevel=2
