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
void sort(vector<int>& V);

int main()
{
	vector<int> V;
	int n;

	cout << "Please input a list of random numbers: " << "\n";
	while(cin >> n){
		V.push_back(n);
	}
	cout << "Your sorted list is: " << "\n";
	sort(V);
	for(size_t i = 0; i < V.size(); i++){
		cout << V[i] << " "; 
	}
	cout << "\n";

	return 0;
}

void sort(vector<int>& V){
	int swp;
	for(size_t i = 0; i < V.size(); i++){
		for(size_t j = i + 1; j < V.size() ; j++){
			if(V[i] > V[j]){
				swp = V[i];
				V[i] = V[j];
				V[j] = swp;
			}
		}
	}
} 

// vim:foldlevel=2
