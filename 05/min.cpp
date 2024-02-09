#include <iostream>
using std::cin;
using std::cout;
#include <limits.h> /* for INT_MAX */

/* compute the minimal value given on standard input. */

/* NOTE: this is a FUNCTION, which takes two inputs and gives back the smaller
 * of the two.  To use it, you just write min(x,y) and it will evaluate to the
 * smaller of the two inputs.  See usage in main() below. */
int min(int x, int y)
{
	if (x < y) return x;
	else       return y;
}

int main()
{
	int s = INT_MAX; /* start out with the "neutral" element for min  */
	int x;
	while (cin >> x) {
		s = min(s,x);
	}
	cout << s << "\n";
	return 0;
}

// vim:foldlevel=2
