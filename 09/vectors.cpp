#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* exercise: write a function that takes a vector of integers
 * and returns a vector of integers which contains only the
 * even elements of the input vector.  E.g., if V = 1 2 3 4 5
 * then the output vector evens(V) = 2 4 */
vector<int> evens(vector<int> V)
{
	fprintf(stderr, "calling evens(V)...\n");
	/* IDEA: make another vector that will be the returned
	 * value, then iterate through the first vector, check
	 * evenness and add if so... */
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
	// cout << evens(V) << "\n";
	/* NOTE: above looks right, but cout does not know how to print vectors. */
	/* NOTE: the below works, but will lead to a bunch of extra calls to evens(V) */
	#if 0
	for (size_t i = 0; i < evens(V).size(); i++) {
		cout << evens(V)[i] << " ";
	}
	#endif
	vector<int> E = evens(V);
	for (size_t i = 0; i < E.size(); i++) {
		cout << E[i] << " ";
	}
	cout << "\n";
	return 0;
}


/* NOTE: the last element is V[V.size()-1] which can also
 * be obtained more simply via V.back() */

// vim:foldlevel=2
