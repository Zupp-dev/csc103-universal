/* TODO: write a function which takes a vector of integers V and a target
 * value t and returns true if and only if there are indexes i != j such
 * that V[i]+V[j] == t.  Bonus question: find a way find a way to modify
 * your function so that the caller can also see what values of i,j work
 * in the case where the return value is true.  The challenge is to figure
 * out how to give 3 outputs from a function instead of just one.
 * HINT: maybe think about value vs reference parameters...  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;



bool stochos(vector<int>& V, int t, int& i_index, int& j_index);
int main()
{
	int v, t;
	vector<int> V;
	cout << "Input target: " << "\n";
	cin >> t;
	cout << "Input list: " << "\n";
	while(cin >> v){
		V.push_back(v);
	}
	int i_index, j_index;
	bool found = stochos(V, t, i_index, j_index); 
	if(found){
		cout << "Target has been found!" << " All the way at: " << i_index << " and " << j_index << " ! " << "\n";
	}else{
		cout << "Go to hell!" << "\n";
	}
	return 0;
}

bool stochos(vector<int>& V, int t, int& i_index, int& j_index){ //stochos is apparently the greek word for target :)
	for(size_t i = 0; i < V.size(); i++){
		for(size_t j = i+1; j < V.size(); j++){
			if(V[i]+V[j] == t){
				i_index = i;
				j_index = j;
				return true;
			}
		}
	}
	return false;
}


// vim:foldlevel=2
