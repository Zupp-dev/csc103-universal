#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <cassert>

/* we'll use a vector of vectors to represent a matrix: */
typedef vector<vector<int>> Matrix;
typedef vector<int> Vec;

vector<int> mul(const Matrix& M, const vector<int>& v)
{
	/* want to combine v with each row of M via "inner product"
	 * or "dot product":  */
	/* before we do anything, might want to check and make sure
	 * that the sizes are compatible: number of entries of V
	 * should match the number of entries in M[i].  Let's assume
	 * that all rows of M have the same length for now. */
	assert(M.size() && M[0].size() == v.size());
	/* NOTE: if the condition above is false, the program will be
	 * terminated.  However, just by compiling with the right flags,
	 * you can remove this check altogether, so there is no cost
	 * in terms of performance. */
	vector<int> r; /* storage for the result. */
	/* set r to have the same number of elements as v, and set them all to 0: */
	r.resize(v.size(),0);
	for (size_t i = 0; i < M.size(); i++) {
		/* combine ith row with v: */
		for (size_t j = 0; j < M[i].size(); j++) {
			r[i] += M[i][j]*v[j];
			/* NOTE: thanks to the resize call above, r[i] will start
			 * out with value 0. */
		}
	}
	return r;
}

/* let's try to make the above look a bit nicer.  First, we'll isolate
 * a useful subroutine: inner product (aka "dot product"). */
int dot(const Vec& u, const Vec& v)
{
	assert(u.size() == v.size());
	int s = 0;
	for (size_t i = 0; i < u.size(); i++) {
		s += u[i]*v[i];
	}
	return s;
}

/* now we'll re-write mul using dot.  We can be extra fancy and make it so
 * you can use the following nice syntax:
 * u*v will compute the inner product of two vectors, while
 * M*v will do matrix multiplication (same behavior as mul(...) above) */
int operator*(const Vec& u, const Vec& v)
{
	return dot(u,v);
}

/* and now our re-written mul function which uses dot (by way of operator*) */
Vec operator*(const Matrix& M, const Vec& v)
{
	assert(M.size() && M[0].size() == v.size());
	Vec r; /* for the return value */
	for (size_t i = 0; i < M.size(); i++) {
		r.push_back(M[i]*v);
		/* NOTE: M[i]*v will call operator*(Vec,Vec) which will
		 * call the dot(...) function we wrote! */
	}
	return r;
}


int main()
{
	Matrix M = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	vector<int> v = {1,1,1};
	// vector<int> r = mul(M,v);
	vector<int> r = M*v; /* NOTE: this calls operator*(Mat,Vec) */
	for (size_t i = 0; i < r.size(); i++) {
		cout << r[i] << " ";
	}
	cout << "\n";
	return 0;
}

// vim:foldlevel=2
