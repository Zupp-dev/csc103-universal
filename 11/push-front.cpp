#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* exercise: write a function to add a new element to a vector
 * at the *front* (index 0), preserving the order of all other
 * elements. */
void push_front(vector<int>& V, int x)
{
	V.resize(V.size()+1);
	/* NOTE: remember how size_t works: -1 is actually 2^64-1 */
	for (size_t i = V.size()-1; i < V.size(); i--) {
		V[i+1] = V[i];
	}
	V[0] = x;
}

/* NOTE: if you do find yourself wanting to do push_front and push_back,
 * look into the deque in the STL. */

int main()
{
	int x;
	vector<int> V;
	while (cin >> x) {
		push_front(V,x);
	}
	/* NOTE: you won't notice on small inputs, but this is actually
	 * quite slow for large vectors... */
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	cout << "\n";

	return 0;
}

// vim:foldlevel=2
