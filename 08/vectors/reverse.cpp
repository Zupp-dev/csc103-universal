#include <iostream>
using std::cin;
using std::cout;

/* exercise: read a list of integers from standard input and print
 * the list back out in reverse order.  E.g., if input was 2 3 4
 * output would be 4 3 2.
 * Issue: we'll have potentially to remember a lot of numbers
 * before we can print anything.  We don't know ahead of time
 * how many variables we will need.  In every program we have
 * written so far (small exceptions for things with strings),
 * we know *at compile time* how much memory / how many variables
 * our program is going to use.
 * For this we need to be able to make new variables "on demand" */

#include <vector>
using std::vector;

int main()
{
	vector<int> V; /* V is a container of integers */
	/* how to add new ones? */
	// V.push_back(7);
	int x;
	while (cin >> x) {
		V.push_back(x);
	}
	/* we've now remembered every number we read.  Just
	 * need to print them all back out. */
	// cout << V; // sadly, cout does not know how to print vectors.
	/* Instead, we print the variables in the vector one by one.
	 * Each one gets a number (index), starting at 0.  The total
	 * number of little variables in your vector is V.size(). */
	for (size_t i = V.size()-1; i < V.size(); i--) {
		cout << V[i] << " ";
		/* NOTE: the condition "i < V.size()" looks wrong, but isn't!
		 * Remember that size_t only stores non-negative values and
		 * when you go beyond zero, you wrap back to 2^64-1. */
	}
	cout << "\n";
	return 0;
}

// vim:foldlevel=2
