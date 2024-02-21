#include <iostream>
using std::cin;
using std::cout;

/* NOTE: you need to at least have a prototype of a function
 * before you try calling it.  Without the following line, this
 * won't compile.  (See the shell transcript.) */
void swap(int& x, int& y);
/* Reminder: above is called a *prototype*. */

/* NOTE: to compile this thing in its present state:
 *    $ g++ -c functions.cpp
 *    $ g++ -c swap.cpp
 *    $ g++ functions.o swap.o
 *    $ ./a.out
 * */

int main()
{
	int a,b;
	cin >> a >> b;
	cout << "a == " << a << "\n";
	cout << "b == " << b << "\n";
	swap(a,b);
	cout << "a == " << a << "\n";
	cout << "b == " << b << "\n";
	return 0;
}

// vim:foldlevel=2
