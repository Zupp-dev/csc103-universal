/* TODO: write a program that reads two integers and prints their greatest
 * common divisor.  E.g., if the two integers were 12 and 18, then your
 * program should print 6.  If the numbers were 12 and 19, it should print 1.
 * NOTE: there is a nice way to do this, known as the Euclidean Algorithm,
 * but my intention is for you to just "brute force" search for the gcd.  */
#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
int main()
{
	int n, m;
	int highnum = 0;
	vector<int> V;
	vector<int> X;

	cout << "Please input two integers: " << "\n";
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		if( n % i == 0){
			V.push_back(i);
		}
	}
	for(int j = 1; j <= m; j++){
		if( m % j == 0){
			V.push_back(j);
		}
	}

	for(int i = 0; i < V.size(); i++){
		cout << V[i] << " ";
	}
	cout << "\n";

	for(int i = 0; i < V.size(); i++){
		for(int j = i + 1; j < V.size(); j++){
			if( V[i] == V[j]){
				V.erase(V.begin() + j);
			}
		}
	}

	for(int i = 0; i < V.size(); i++){
		cout << V[i] << " ";
	}
	cout << "\n";


	for(int i = 0; i < V.size(); i++){
		if(n % V[i] == 0 && m % V[i] == 0){
			X.push_back(V[i]);
		}
	} 
	
	for(int i = 0; i < X.size(); i++){
		cout << X[i] << " ";
	}
	cout << "\n";
	
	for(int i = 0; i < X.size(); i++){
		if(X[i] > highnum){
			highnum = X[i];
		}
	}

	cout << "The greatest common divisor of " << n << " and " << m << " is " << highnum << "\n";
	
	return 0;
}

// vim:foldlevel=2
