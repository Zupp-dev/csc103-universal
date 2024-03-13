#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <string>
using std::string;

size_t find(const string& s1, const string& s2)
{
	size_t n1 = s1.length();
	size_t n2 = s2.length();
	/* XXX: if s2 is longer than s1, we get n1-n2 < 0, but it is of
	 * type size_t, and hence will actually be a large positive integer.
	 * NOTE: the reason why we found asdfasdf in hello is that we scanned
	 * through memory off the end of s1 and eventually found s2 in memory! */
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
	string s1 = "hello ";
	string s2 = "!!!!!";
	cout << s1+s2 << "\n";
	#if 0
	/* doesn't work with vectors: */
	vector<char> v1,v2;
	vector<char> v = v1+v2;
	#endif
	#if 0
	cout << s1.find("hell") << "\n";
	cout << s1.find("hellllllll") << "\n";
	// if (s1.find("helllll") == -1) cout << "not found\n";
	if (s1.find("helllll") == string::npos) cout << "not found\n";
	string s;
	for (size_t i = 0; i < 10; i++) {
		s.push_back(0);
	}
	cout << "size of s (full of NULL chars): " << s.size() << "\n";
	cout << "length of s (full of NULL chars): " << s.length() << "\n";
	cout << "s == " << s << ".\n";
	#endif
	/* read two strings over and over, check for second in first: */
	while (cin >> s1 >> s2) {
		/* NOTE: if we use cin as above, our strings will never have spaces */
		size_t i = find(s1,s2);
		if (i == (size_t)-1) {
			cout << "no match found.\n";
		} else {
			cout << "s2 found at index " << i << " in s1\n";
		}
	}
	return 0;
}

// vim:foldlevel=2
