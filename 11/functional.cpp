#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <limits.h>

/* NOTE: the following is a *function pointer* type: */
typedef int (*binaryop)(int,int);
/* It says that anything of type "binaryop" is a function
 * which takes two integers and returns another one (sort
 * of like a binary operator would do on integers). */
/* BTW: you can use typedef to give a new name to an existing
 * datatype.  If you wanted "int" to be "Z", you could do this: */
typedef int Z;

/* let's make some examples of binary operations: */
int add(int a, int b) { return a+b; }
int mul(int a, int b) { return a*b; }
int max(int a, int b) { return (a<b)?b:a; }
int min(int a, int b) { return (a>b)?b:a; }

/* now let's write a general function for "folding" which takes
 * a vector of elements you want to combine, a binary operation
 * with which to combine them, and a starting point (usually the
 * "neutral element" for the binary operation).  NOTE: :this function
 * takes another function as a parameter! */
int fold(const vector<int>& V, binaryop op, int e)
{
	// V.push_back(10);
	/* NOTE: due to the "const" modifier, the above line would cause
	 * compiler errors. */
	// int r = 0; /* storage for sum */
	int r = e; /* storage for result */
	for (size_t i = 0; i < V.size(); i++) {
		// r = r + V[i];
		r = op(r,V[i]);
	}
	return r;
}

int main()
{
	Z x; /* x is actually of type int... */
	vector<int> V;
	while (cin >> x) V.push_back(x);
	cout << "sum of all elements:     " << fold(V,add,0) << "\n";
	cout << "product of all elements: " << fold(V,mul,1) << "\n";
	cout << "max of all elements:     " << fold(V,max,INT_MIN) << "\n";
	cout << "min of all elements:     " << fold(V,min,INT_MAX) << "\n";
	return 0;
}

// vim:foldlevel=2
