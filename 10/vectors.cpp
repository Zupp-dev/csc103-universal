/* NOTE: if you want bounds checking in your vectors, use this macro: */
#define _GLIBCXX_DEBUG 1
/* NOTE: this will make vector accesses slower, since you are checking
 * the bounds every time.  However, can be super useful for debugging. */
#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

int main()
{
	vector<int> V;
	/* NOTE: have to be careful with OUT OF BOUNDS accesses into
	 * your vector. */
	V.push_back(2);
	V.push_back(3);
	cout << "V has " << V.size() << " elements\n";
	// cout << "V[1000] == " << V[1000] << "\n";
	// cout << "V[10000] == " << V[10000] << "\n";
	// cout << "V[100000] == " << V[100000] << "\n";
	for (size_t i = 0; i < 100; i++) {
		printf("V[%lu] == %i\n",i,V[i]);
	}
	return 0;
}

// vim:foldlevel=2
