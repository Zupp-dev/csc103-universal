/* TODO: write a function which takes two integer parameters and swaps
 * their contents.  That is, if for example x==0,y==1, then after calling
 * swap(x,y), it should be the case that x==1,y==0.  */

#include <iostream>
using std::cin;
using std::cout;

void swap(int& x, int& y);

int main()
{
	int x, y;
	cout << "Please input two integers x and y: " << "\n";
	cin >> x >> y;
	swap(x, y);
	cout << "The values of your integers have just been swapped peep: " << " x ==  " << x << " and y == " << y << "\n";
	return 0;
}

/* TODO: (bonus question) Can you rewrite your swap function so that it does
 * not use a temporary variable?  (Hint: use algebra/arithmetic...)  */

void swap(int& x, int& y){
	x  = x + y;
	y = x - y;
	x = x - y;
}

// vim:foldlevel=2
