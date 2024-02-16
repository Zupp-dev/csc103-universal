#include <iostream>
using std::cin;
using std::cout;

/* exercise: read two integers n,m and print an nxm rectangle of '*' chars
 * like this, if n was 3 and m was 5:
 *     * * * * *
 *     * * * * *
 *     * * * * *
 * */
int main()
{
	size_t n,m; /* why size_t?  Can't have negative number of stars... */
	cin >> n >> m;  /* NOTE: parses as "(cin >> n) >> m"  And so you can see
	                   that "cin >> n" *evaluates* to cin! */
	/* IDEA: print one row at a time.  How many rows? n. */
	for (size_t i = 0; i < n; i++) {
		/* Job of the body of this loop is to print ONE row of '*'s. */
		for (size_t j = 0; j < m; j++) {
			cout << "* ";
		}
		cout << "\n";
	}

	cout << "\n\n ~~~~~~~~~~~~~~~ printing the (i,j) indexes... ~~~~~~~~~~~~~~~~~~\n";

	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < m; j++) {
			printf("(%lu,%lu) ",i,j);
			/* will print (i,j) pairs */
			// same as this:
			// cout << "(" << i << "," << j << ") ";
		}
		cout << "\n";
	}

	/* NOTE: exercises gcd.cpp and rectangle.cpp in ../practice-problems/03/
	 * would be good to do after today. */
	return 0;
}

// vim:foldlevel=2
