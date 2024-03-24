/* TODO: write a function which takes a *sorted* vector of integers V
 * and an integer x and performs a *binary search* for x.  The idea is
 * that since the vector is sorted, you can look at the middle element
 * and then rule out half of the vector from the search.  Just keep on
 * doing that until you find x or you run out of places to look. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;



void sort(vector<int>& V);

int binarysearch(const vector<int>& V, int x);

int main()
{
	int x, v;
	vector<int> V;
	cout << "Please input a random number: "<< "\n";
	cin >> x;
	cout << "Please input a list of numbers in any order: " << "\n";
	while(cin >> v){
		V.push_back(v);
	}
	for(size_t i = 0; i < V.size();i++){
		cout << V[i] << " ";
	}
	sort(V);
	int index = binarysearch(V, x);
	if(index != -1){
		cout << "The initial random number you inputted was found in your list of numbers! " << "\n";
	}else{
		cout << "Not found! " << "\n";
	}

	return 0;
}

void sort(vector<int>& V){
	for(int i = 0; i < V.size()-1; i++){
		for(int i = 0; i <  V.size()-1; i++){
			if( V[i] < V[i+1]){
				int swp = V[i];
				V[i] = V[i+1];
				V[i+1] = swp;
			}
		}
	}
}

int binarysearch(const vector<int>& V, int x){
	int L = 0;
	int U = V.size() - 1;
	int mid = ((L + U) / 2);
	while( L <= U){
		if(V[mid] == x){
			return mid;
		}
		else if(V[mid] < x){
			L = mid + 1;
		}else{
			U = mid - 1;
		}
	}
	return -1;
}
// vim:foldlevel=2
