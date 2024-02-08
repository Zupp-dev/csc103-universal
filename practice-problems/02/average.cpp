/* TODO: write a small program that reads 3 integers from standard input
 * and prints the average of those integers.  NOTE: the average might not
 * be an integer.
 * Bonus question: if you can, make your program work not just for 3 integers,
 * but for arbitrarily many. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int x = 0;
	int sum = 0;
	int y, z;
	float Average;
	
	cout << "How many integers will you be using today: " << "\n";
	cin >> y;
	while(x < y){
		cin >> z;
		x++;
		sum = sum + z;
	}
	
	Average = sum / y;

	cout << "The average of your inputed integers is: " << Average << "\n";
	


	return 0;
}

// vim:foldlevel=2
