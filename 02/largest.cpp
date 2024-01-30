#include <iostream> /* copy + paste definitions of cin and cout */
// using namespace std; /* let us call cin and cout by their first names */
using std::cin;
using std::cout;
/* NOTE: the semicolon is like punctuation -- use it to end / delimit
 * your c++ sentences (like the full stop "." in English). */

int main() /* this is the official "starting point" for the program */
{   /* NOTE: the braces {...} group statements together. */
	/* we need scraps of paper to write on. Here's how: */
	int A; /* NOTE: "int" is the *datatype*.  You can use this to store an integer */
	int B;

	// A = 99; /* this would write 99 on A.  Think of it like this: A <-- 99 */
	/* however, we wanted to listen for a number */

	cin >> A;  /* this will listen for a number and write it on A */
	/* this is step 1! */
	while (true) {
		cin >> B; /* step 2 */
		if (!cin.good()) { /* NOTE: cin.good() tells us if the last attempted read
		                      worked or not.  This one applies to line 20. */
			break; /* end loop if we ran out of numbers */
			/* NOTE: if there is only one statement that makes up the
			 * body of your if or while, etc, you can omit the braces. */
		}
		if (B > A) {
			A = B;
		}
	}

	/* report the answer, which is whatever is on A */
	cout << "largest value was " << A << "\n";
	/* cin:  listening
	 * cout: speaking*/
	return 0; /* NOTE: "return" ends the current function (in this case main),
	and prescribes the "output", or "return value". */
}

// vim:foldlevel=2
