#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* experimenting with datatypes */
	/* you can see how much space they take using sizeof: */
	char c = 'A'; /* NOTE: the single quotes ''.  This is how
	                 you specifiy character literals. */
	cout << "character takes " << sizeof(c) << " byte(s).\n";
	int x = 99;
	cout << "int takes " << sizeof(x) << " byte(s).\n";
	long l = 12341234;
	cout << "long takes " << sizeof(l) << " byte(s).\n";
	double d = 0.3;
	cout << "double takes " << sizeof(d) << " byte(s).\n";
	/* NOTE: watch out for rounding errors with floating point: */
	double f = 0.1;
	if (f+f+f == d) {
		cout << "as expected, 0.1 * 3 == 0.3\n";
	} else {
		cout << "o_O\n";
		printf("3f == %.17f\n",f+f+f);
		printf("d  == %.17f\n",d);
		/* NOTE: the .17f in the format string tells printf to show us
		 * more decimal places.  By default, we wouldn't see enough to
		 * show the difference between those values.  You can uncomment
		 * the lines below if you want to see for yourself: */
		// printf("3f == %f\n",f+f+f);
		// printf("d  == %f\n",d);
	}
	unsigned int y = 3;
	int i = 0;
	while (i < 23) {
		cout << y << "\n";
		y = y*3; /* same as: y *= 3; */
		i = i+1; /* same as i++ or ++i or i += 1 */
		/* NOTE: when you overflow an UNSIGNED integer type,
		 * you will get the remainder of what it would have been
		 * after dividing by 2^32 (or generally, 2^{number of bits}) */
	}
	return 0;
}

// vim:foldlevel=2
