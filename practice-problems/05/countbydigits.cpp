/* TODO: Part I: write a little function to count the number of base-10
 * digits of a (long, unsigned) integer.  You can do this just by dividing
 * the number by 10 over and over until you get 0, and seeing how many
 * divisions were required.  There's a prototype below for you to implement.
 * TODO: Part II: using the function from part I, write a main program that
 * reads integers (size_t type) from stdin, and then prints a frequency table
 * showing how many numbers of each digit length were seen.  For example, if
 * the input were 12 2349 2 99 123991, then you would print out something like
 * the following:
 * 1 : 1
 * 2 : 2
 * 3 : 0
 * 4 : 1
 * 5 : 0
 * 6 : 0
 * NOTE: you can omit the entries in the table where the count is 0 if you'd
 * like.  You can count 0 has having 1 digit or 0 digits.  Also note that the
 * largest 64 bit integer is 18446744073709551615, so your table will have at
 * most 20 entries.
 * NOTE: do NOT declare 20 different count variables!  Use a vector to store
 * the counts instead.
 * */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

size_t countdigits(size_t n);

int main()
{
	long unsigned int n;
	cout << "Enter any int: " << "\n";
	cin >> n;
	cout <<" The number of base-10 digits are:  " << countdigits(n) << "\n";
	return 0;
}

size_t countdigits(size_t n){
	int count = 0;
	while(n > 0){
		n /= 10;
		count++;
	}
	return count;
}
// vim:foldlevel=2
