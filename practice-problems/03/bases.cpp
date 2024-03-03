/* TODO: write a program that reads an integer b (say b < 10), and
 * another integer n, and then prints a string that represents the
 * integer n in base b.  E.g., if b=7 and n=94, your program would
 * output digits "163", as 94 = 1*49 + 6*7 + 3.  ("361" is also ok if
 * you print the least significant digit first).  Or if b=2 and n=7,
 * then you would print "111" since 7 = 1*4 + 1*2 + 1. */

#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

int baseCalc(unsigned &n, unsigned b);
string reverseString(string s);

int main()
{
	unsigned b, n, n1;
	string s = "";

	cout << "Please input a number less than 10" << "\n";
	cin >> b;
	cout << "Please input any  integer" << "\n";
	cin >> n;
	if(b > 10 || b == 0 || b == 1){
		cout << "Go to hell! ";
	}
	if(n == 0){
		s = "0";
	}
	while(n){
		unsigned rmdr = baseCalc(n, b);
		s += '0'+rmdr;
	}

	cout << reverseString(s) << "\n";

	return 0;
}

int baseCalc(unsigned &n, unsigned b)
{
	unsigned r = n % b;
	n /= b;
	return r;
}

string reverseString(string s){
	string ret = "";
	for(int i = s.length()-1; -1 < i; i--){
		ret += s[i];
	}
	return ret;
}
// vim:foldlevel=2
