/* TODO: Write a function that evaluates a polynomial at a given input.
 * To represent the polynomial, use a vector (say of integers) which will
 * correspond to the coefficients.  That is, if your polynomial is:
 * f(X) = C_0 + C_1*X + C_2*X^2 + ... + C_d*X^d
 * then f would be given as a vector C such that C[i] = C_i.
 * For your function, please use the prototype given below.
 * */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <cmath>

int polyeval(const vector<int>& C, int x);

int main()
{
	int x, c;
	vector<int> C;
	cout << "Please input the number you want your polynomial to be evaluated too: " << "\n";
	cin >> x;
	cout << "Please input the coeffecients you want in your polynomial: " << "\n";
	while(cin >> c){
		C.push_back(c);
	}
	cout << "The evaluation of your polynomial is: " << polyeval(C, x) << "\n";
	return 0;
}


int polyeval(const vector<int>& C, int x){
	int p = 0;
	for(size_t i = 0; i < C.size(); i++){
		p += (C[i] * (int)pow(x, i));
	}
	return p;
}

// vim:foldlevel=2
