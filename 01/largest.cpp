#include <iostream> /* copy + paste definitions of cin and cout */
using namespace std; /* let us call cin and cout by their first names */

int main() /* this is the official "starting point" for the program */
{
	/* we need scraps of paper to write on. Here's how: */
	int A; /* NOTE: "int" is the *datatype*.  You can use this to store an integer */
	int B;
	
	// A = 99; /* this would write 99 on A.  Think of it like this: A <-- 99 */
	/* however, we wanted to listen for a number */
	
	cin >> A;  /* this will listen for a number and write it on A */
	/* this is step 1! */
	while (true) {
		cin >> B; /* step 2 */
		if (!cin.good()) break;
		if (B > A) {
			A = B;
		}
		/* NOTE: we need to figure out when we are out of numbers */
	}
	
	/* report the answer, which is whatever is on A */
	cout << "largest value was " << A << "\n";
	/* cin:  listening
	 * cout: speaking*/
}

// vim:foldlevel=2
