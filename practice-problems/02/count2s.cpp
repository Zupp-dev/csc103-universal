/* TODO: given an integer n, find exponent of the largest power of two that
 * divides n.  Example: if n = r*8 with r odd, then you should output 3
 * since 8 = 2^3.  (You are just recovering the exponent of the 2 in the
 * number's factorization into primes.)
 * IDEA: keep on dividing n by two until we can't, and keep track of how
 * many times it worked. */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int n;
	cout << "Enter an integer: " << "\n";
	cin >> n;
	
	int orginalN = n;
	int exponent = 0;
	while(n % 2 == 0) {
		n /= 2;
		exponent++;
	}
	
	cout << " The exponent of the largest power of two that divides " << orginalN << " is: " << exponent << "\n";



	return 0;
}

// vim:foldlevel=2
