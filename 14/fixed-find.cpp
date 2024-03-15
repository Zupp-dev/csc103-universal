#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <string>
using std::string;

/* Let's fix the find function from last time: */
size_t find(const string& s1, const string& s2)
{
	size_t n1 = s1.length();
	size_t n2 = s2.length();
	/* XXX: if s2 is longer than s1, we get n1-n2 < 0, but it is of
	 * type size_t, and hence will actually be a large positive integer.
	 * NOTE: the reason why we found asdfasdf in hello is that we scanned
	 * through memory off the end of s1 and eventually found s2 in memory! */
	if (n2 > n1) return -1;
	for (size_t i = 0; i <= n1-n2; i++) {
		/* see if there is a match starting at i: */
		size_t j;
		for (j = 0; j < n2; j++) {
			if (s2[j] != s1[i+j])
				break; /* move on to next value of i... */
		}
		/* right here, we need to know if we founda  match or not... how?
		 * Need to know if the inner for loop ended due to the break or
		 * if we just went through all the values of j. */
		if (j == n2) return i;
	}
	return -1;
}

int main()
{
	return 0;
}

// vim:foldlevel=2
