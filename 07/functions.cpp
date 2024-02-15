#include <iostream>
using std::cin;
using std::cout;

/* simple function to compute x |--> x^2+1 */
double f(double x)
{
	return x*x+1;
}

/* exercise / example: make a function that does not
 * return the same value every time ("multi-valued").
 * That is, if you set y = f(2); z = f(2); might be
 * that y != z.  */

/* could use a *global* variable (defined outside of all functions) */
double g = 0.0;
double h(double x)
{
	g = g+1;
	return g+x;
}
/* NOTE: often global variables are not a great idea.
 * They can create unnecessary connections between functions
 * and make your program harder to analyze. */

/* question: do functions work with a COPY of what you
 * give as the input, or the real thing?  ("Real thing"
 * means "same piece of memory".) */
int k(int x)
{
	x = x+1;
	return x;
}
/* looks like the function works with a copy.
 * However, we can change this behavior if we want.
 * Just put an "&" between the type and name of a
 * parameter, and the function will receive the
 * same piece of memory. */
int k2(int& x)
{
	x = x+1;
	return x;
}

/* exercise: write a function that will swap the values
 * of the arguments.  So if x=3,y=4, then after calling
 * swap(x,y), x==4,y==3. */
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int y = 7;
	cout << "y == " << y << "\n";
	cout << "k(y) == " << k(y) << "\n";
	cout << "and now y == " << y << "\n";
	cout << "k2(y) == " << k2(y) << "\n";
	cout << "and now y == " << y << "\n";
	/* NOTE: fhe following would give a compiler error about "lvalues": */
	// cout << k2(7) << "\n";
	/* NOTE: An "lvalue" is something that could occur on the left hand side
	 * of an assignment.  Since clearly "7 = x;" does not make much sense, it
	 * follows that indeed 7 is not an lvalue.  */
	#if 0
	/* early code to test out or functions... change the above 0 to 1 and
	 * recompile if you want to run this stuff. */
	cout << "f(2) == " << f(2) << "\n";
	cout << "h(2) == " << h(2) << "\n";
	cout << "h(2) == " << h(2) << "\n";
	cout << "h(2) == " << h(2) << "\n";
	cout << "h(2) == " << h(2) << "\n";
	cout << "h(2) == " << h(2) << "\n";
	#endif
	return 0;
}

// vim:foldlevel=2
