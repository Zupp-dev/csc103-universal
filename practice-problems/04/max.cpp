/* TODO: write a function which takes three integer parameters and returns
 * the largest one. */

#include <iostream>
using std::cin;
using std::cout;

/* your answer goes here... */

int max(int& x, int& y, int& z);


int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	cout << max(x,y,z) << "\n";
	return 0;
}

int max(int& x, int& y, int& z){
	int max = x;
	if(y > max){
		max = y;
	}
	if(z > max){
		max = z;
	}
	return max;
}

// vim:foldlevel=2
