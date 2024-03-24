/* TODO: write a function which takes a vector of integers V and an integer x
 * and returns a boolean indicating whether or not x was found in the elements
 * of V. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

bool func(vector<int> &V, int x){
	for(size_t i = 0; i < V.size(); i++){
		if(V[i] == x){
			return true;
		}
	}
	return false;
}

int main()
{
	int x, n;
	vector<int> V;
	cout << "Please input one random number: " << "\n";
	cin >> x;
	cout << "Please input a list of numbers: " << "\n";
	while(cin >> n){
		V.push_back(n);
	}
	if(func(V, x) == true){
		cout << "The random number you initially inputed was found in your list of numbers!" << "\n";
	}else{
		cout << "Go to hell! "<< "\n";
	}

	return 0;
}

// vim:foldlevel=2
