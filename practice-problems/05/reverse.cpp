/* TODO: write a function which takes a vector of integers V (by reference)
 * and reverses its contents.  That is, if V = 1 2 3, then after calling
 * reverse(V), it would contain 3 2 1.  NOTE: the goal is not to print
 * anything, but to rearrange the vector elements in memory. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void swap(int& a, int& b);

void reverse(vector<int>& V);

int main()
{
	int v;
	vector<int> V;
	cout << "Enter a list: " << "\n";
	while(cin >> v){
		V.push_back(v);
	}
	for(int i = 0; i < V.size(); i++){
		cout << V[i] << " ";
	}
	cout << "\n";
	
	reverse(V);

	for(int i = 0; i < V.size(); i++){
		cout << V[i] << " ";
	}
	cout << "\n";
	return 0; 
}

void swap(int& a, int& b){
	int swp = a;
	a = b;
	b = swp;
}

void reverse(vector<int>& V){
	int first = 0;
	int last = V.size() - 1;

	while(first < last){
		swap(V[first], V[last]);
		first++;
		last--;
	}
	
}
// vim:foldlevel=2
