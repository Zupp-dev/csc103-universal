/* TODO: write a program to compute (and then print) sum of all integers
 * given on standard input. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int num, sum =0;

	cout << "Please enter a integer (a non integer will stop the program): " << std::endl;

	while (cin >> num){
		sum += num;
	}

	cout << "Sum of integers: " << sum << std::endl;

	return 0;
}

// vim:foldlevel=2
