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
	int small = INT_MAX;
	int twosmall = INT_MAX;

	cout << "Please input as many integers as you want (the program will stop when you press a non integer" << "\n";
	while(cin >> n){
		if(n > small && n < twosmall){
			twosmall = n;
		}else if(n < small){
			twosmall = small;
			small = n;
		}
	}

	cout << "The smallest integer was: " << small << "\n";
	cout << "The second smallest integer was: " << twosmall << "\n";

	return 0;
}

// vim:foldlevel=2
