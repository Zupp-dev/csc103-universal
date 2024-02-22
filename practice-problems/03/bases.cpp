/* TODO: write a program that reads an integer b (say b < 10), and
 * another integer n, and then prints a string that represents the
 * integer n in base b.  E.g., if b=7 and n=94, your program would
 * output digits "163", as 94 = 1*49 + 6*7 + 3.  ("361" is also ok if
 * you print the least significant digit first).  Or if b=2 and n=7,
 * then you would print "111" since 7 = 1*4 + 1*2 + 1. */
/*
#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

int main()
{
	int b, n;
	string x[];


	cout << "Please input a number less than 10" << "\n";
	cin >> b;
	cout << "Please input any  integer" << "\n";
	cin >> n;

	while(n / b){
		int p = 0;
		x[p++] = n % b;
		n /= b;
		if(n / b < 1){
			break;
		}else {
			continue;
		}
	}

	cout << "The base " << b << "representation of " << n << "is " << x << "\n";

	return 0;
}
*/
// vim:foldlevel=2
