#include <iostream>
using std::cin;
using std::cout;

/* TODO: read two integers n,m and draw (using some for loops) a
 * rectangle of '*' characters that is nxm.  E.g. if n = 3, m = 4
 * then output would be like this: */
// * * * *
// * * * *
// * * * *

int main()
{
	int n, m;
	cout << "Please input a rows and columns: ";
	cin >> n >> m;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i == 1 || i == n || j == 1 || j == m){
				cout << " * ";
			}else{
				cout << "   ";
			}
		}
	cout << "\n";
	} 
	return 0;

}

/* Bonus question: change the above so you get a "hollow" rectangle.
 * E.g. if n==4 and m==5, you would have this: */
// * * * * *
// *       *
// *       *
// * * * * *


// vim:foldlevel=2
