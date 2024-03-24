/* Function *prototypes* might seem unnecessary -- after all, as long as you
 * place the function earlier in your file than the places you use it, it'll
 * compile just fine.
 * TODO: come up with a situation where at least one function prototype is
 * *strictly necessary*.  Write functions which demonstrate your idea and
 * make sure what you wrote actually compiles (and will not compile without
 * any function prototypes).
 * BTW, if you need a reminder about prototypes, read here:
 * https://www-cs.ccny.cuny.edu/~wes/CSC103/lingo.html#function-prototype
 * or here:
 * http://www.charlesli.org/pic10a/lectures/lecture8/index.html
 * */
#include <iostream>
using std::cout;
using std::cin;

int factorial(int n);

int main()
{
	int n;
	cout << "Please input a integer: " << "\n";
	cin >> n;
	cout << "The factorial of " << n << " is " << factorial(n) << "\n";

	return 0;
}

int factorial(int n){
	if ( n == 0 || n ==1 ){
		return 1;
	}else {
		return n * factorial(n-1);
	}
		
}

// vim:foldlevel=2
