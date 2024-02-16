/* TODO: write a small program that will read integers from standard input (cin)
 * and print the *second smallest* integer to standard output (cout).
 * NOTE: this might be a little challenging.  Be sure to work out your process
 * clearly on paper (say using the post-it note model) before trying to write
 * any code. */
#include <iostream>
#include <climits>
using std::cin;
using std::cout;

int main()
{
	int n;
	int z = INT_MAX;
	cout << "Please input as many integers as you want (the program will stop when you press a non integer" << "\n";
	while(cin >> n){
		if(n < z){
			z = n;
		}
	}

	cout << "The smallest integer was: " << z << "\n";
	return 0;
}

// vim:foldlevel=2
