/* TODO: write a function which takes a vector of integers V and places
 * the elements in sorted order (that is, i<=j ==> V[i]<=V[j]).
 * NOTE: there is a simple solution in l3.pdf if you get stuck, but it's
 * a pretty good exercise if you work it out yourself. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
vector<int> sort(vector<int> V);

int main()
{
	vector<int> V;
	int n;

	cout << "Please input a list of random numbers: " << "\n";
	while(cin >> n){
		V.push_back(n);
	}
	cout << "Your sorted list is: " << "\n";
	vector<int> S = sort(V);
	for(size_t i = 0; i < S.size()-1; i++){
		cout << S[i] << " "; 
	}
	cout << "\n";

	return 0;
}

vector<int> sort(vector<int> V){
	int swp;
	for(int i = 0; V.size()-1; i++){
		for(int j = 0; V.size()-1; i++){
			if(V[i] < V[j+1]){
				swp = V[i];
				V[i] = V[j+1];
				V[j+1] = swp;
			}
		}
	}
	return V;
} 

// vim:foldlevel=2
