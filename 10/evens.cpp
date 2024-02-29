#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* NOTE: sending a vector to a function by value might be
 * expensive -- you need to copy the entire vector each time
 * you call the function.  We can get something similar using
 * the following trick: const+reference: */
// vector<int> evens(vector<int> V)
vector<int> evens(const vector<int>& V)
{
	/* NOTE: the "const" is a contract (enforced by the compiler)
	 * that this function will not change V.  The combination of
	 * const+refence (&) sort of gives you an *efficient* by-value
	 * parameter.  */
	vector<int> E; /* will store the even elements of V */
	/* loop through V and add all evens to E: */
	for (size_t i = 0; i < V.size(); i++) {
		/* if V[i] is even, add to E: */
		if (V[i] % 2 == 0) {
			E.push_back(V[i]);
		}
	}
	return E;
}

int main()
{
	vector<int> V; /* holds input */
	int x; /* most recently input integer */
	while (cin >> x) V.push_back(x);
	vector<int> E = evens(V);
	for (size_t i = 0; i < E.size(); i++) {
		cout << E[i] << " ";
	}
	cout << "\n";
	return 0;
}

// vim:foldlevel=2
