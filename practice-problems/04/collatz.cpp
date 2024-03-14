/* TODO: write a program to test the collatz conjecture.  This conjecture
 * considers the following process:
 * Start with any (positive) integer n and then transform it as follows:
 * -- if n == 1, stop
 * -- if n is even, divide it by 2 (n --> n/2)
 * -- if n is odd, multiply b 3 and add 1 (n --> 3n+1)
 * Conjecture: this process always stops after a finite number of steps,
 * no matter what value of n you start with.
 *
 * Your program should work as follows:
 * 1. read an integer
 * 2. see how many steps the above process takes before you hit 1
 * 3. print # of steps
 * 4. go back to (1) until stdin has no more integers to read.
 * */


#include <iostream>
using std::cin;
using std::cout;

int collatz(int n);

int main()
{
	int n;
	cout << "Please input any integer: " << "\n";
	cin >> n;
	cout << "The number of steps it took for " << n << " to equal 1 is: " << collatz(n) << "\n";
	return 0;
}

int collatz(int n){
	int i;
	for(i = 0; n != 1; i++){
		if(n % 2 == 0){
			n /= 2;
		}else{
			n = (n*3)+1;
		}
	}
	return i;

}
// vim:foldlevel=2
