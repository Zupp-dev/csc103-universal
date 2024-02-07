#include <iostream>
using std::cin;
using std::cout;

/* exercise: write a program that reads integers from stdin
 * and computes the sum of them all. */

int main()
{
	int x;
	int s = 0;
	while (cin >> x) {
		s+=x;
	}
	cout << s << "\n";
	return 0;
}

// vim:foldlevel=2
