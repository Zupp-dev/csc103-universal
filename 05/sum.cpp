#include <iostream>
using std::cin;
using std::cout;

/* exercise: write a program that reads integers from stdin
 * and computes the sum of them all. */

int main()
{
	int s = 0;
	int x;
	while (cin >> x) {
		s+=x;
	}
	cout << s << "\n";
	return 0;
	/* NOTE: the return from main indicates the success or failure
	 * of this program.  You can see this in your shell through the
	 * variable $?.  NOTE: 0 indicates success, and everything else
	 * indicates failure.  See the transcript for examples of the
	 * && operator in your shell */
}

// vim:foldlevel=2
