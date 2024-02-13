#include <iostream>
using std::cin;
using std::cout;

int main()
{
	size_t i;
	/* NOTE: size_t is a good choice for storing sizes of things.  It will be the
	 * longest *unsigned* integer type that fits in a CPU register. */
	for (i = 0; i < 10; /* i++ */) {
		/* Reminder: i++ is essentially the same thing as i = i+1 */
		cout << "hope you are enjoying the snow :D\n";
		cout << "i == " << i << "\n";
		i++;
	}
	/* NOTE: if you declare i in the for loop, as above, then you will not
	 * be able to use it outside (it is "out of scope"). */
	/* i is 10.  i++ happens until i<10 is false... */
	cout << "after the loop: i == " << i << "\n";
	#if 0
	// simplest way to make an infinite for loop:
	for (;;) {
		cout << "8D ";
	}
	#endif
	/* difference between prefix and postfix increment: */
	int j = 20;
	cout << "j++ = " << j++ << "\n";
	cout << "and now j == " << j << "\n";
	cout << "++j = " << ++j << "\n";
	cout << "and now j == " << j << "\n";
	/* j++ gives you the "old" value, ++j will give you the new value.
	 * Might matter if you did something like this:
	 *     A[i++] = 0;
	 * */

	return 0;
}

// vim:foldlevel=2
