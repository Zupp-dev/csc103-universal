/* TODO: write a program that will read an integer n from standard input and
 * then print the sum of the first n squares.  That is:
 * 1^2 + 2^2 + 3^2 + ... + n^2.
 * NOTE: The '^' operator in C++ is NOT exponentiation!  To square x, just
 * use x*x instead.
 * Bonus question: compute the sum of the first n *odd* squares.  That is,
 * 1^2 + 3^2 + 5^2 + ... + (2n-1)^2
 * */
#include <iostream>
using std::cin;
using std::cout;

int sum_o_square (int n)
{
	int sum = 0;

	for(int i = 1; i <= n; ++i){
		if(i % 2 == 1){	
		sum += i * i;
		}else{
			continue;
		}
	}
	return sum;
}

int main()
{
	int n;
    cout << "Please input any integer: " << "\n";
	cin >> n;
	cout << "The sum of the first " << n << " squares is " << sum_o_square(n) << "\n";
	return 0;
}


// vim:foldlevel=2
