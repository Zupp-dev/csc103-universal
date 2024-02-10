/* TODO: write a small program that prints an *ASCII table*.  That is,
 * it should print each character along side its numeric representation
 * in the ASCII system: * https://en.wikipedia.org/wiki/Ascii
 * NOTE: you can trick cout into printing the ascii value of a character
 * simply by type-casting to integer (or by storing the character in an
 * integer variable and printing that instead).  Also note that the printable
 * range of ASCII values starts at 32 (space) and goes to 126.
 * */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int num;

	for (num = 32; num <= 126; num++ ){
		cout <<" " << num << " = " << (char) num << "\n";
	}
	return 0;
}



// vim:foldlevel=2
