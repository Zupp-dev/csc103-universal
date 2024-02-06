/* TODO: write a program that computes the following strange thing:
 * the difference of the sum of all the evens and the odds.  E.g. if
 * the input were 4 7 6 then the output would be 3 (= (4+6) - 7).
 * You can figure out even oddness by using the % operator which computes
 * the *remainder* of a division.
 * Bonus question (easy):  can you do this without keeping track of two
 * different sums?
 * Bonus question (might be non-obvious): can you do this without any
 * if statements? */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int x;
	int y;
	int e_sum = 0;
	int o_sum = 0;
	int Diff;
	
	cout << "Please input an integer: " << "\n";
	while(true){
		cin >> x;
		if(!cin.good()){
			break;
		}
		if(x % 2 == 0){
			e_sum = e_sum + x;
		} else if(x % 2 == 1) {
			o_sum = o_sum + x;
				
		} else {
			break ;
		} 
	}


	cout << "The following is the sum of all even numbers: " << e_sum << "\n";

	
	cout << "The following is the sum of all odd numbers: " << o_sum << "\n";

	Diff = e_sum - o_sum;

	cout << "The differnce of the sum of all the evens and the odds is: " << Diff << "\n";



	
	return 0;
}


// vim:foldlevel=2
