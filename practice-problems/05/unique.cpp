/* TODO: write a function which takes a *sorted* vector of integers V
 * (that is, i<=j ==> V[i]<=V[j]) and returns a vector of the unique
 * elements of V.  That is to say, all duplicates have been removed.
 * For example, if V = {1,2,2,3,3,3,4}, the resulting vector should
 * contain {1,2,3,4}.  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void unique(vector<int>& V);

int main()
{
	int v;
	vector<int> V;
	cout << "Enter list: " << "\n";
	while(cin >> v){
		V.push_back(v);
	}
	
	unique(V);

	cout << "List without duplicates is: " << "\n";
	for(int i = 0; i < V.size(); i++){
		cout << V[i] << " ";
	} 
	cout << "\n";
	
	return 0;
}

void unique(vector<int>& V){
	int writeIndex = 0;

	for(int i = 0; i < V.size(); i++){
		bool isDuplicate = false;
		
		for(int j = 0; j < writeIndex; j++){
			if(V[i] == V[j]){
				isDuplicate = true;
				break;
			}
		}
		if(!isDuplicate){
			V[writeIndex] = V[i];
			writeIndex++;
		}
	}
	V.resize(writeIndex);
}
/* TODO: bonus question: write another version of this function which
 * actually removes the duplicates from the input vector rather than
 * returning an altogether new vector.  NOTE: you could of course do
 * the same thing as before, and then overwrite your original vector,
 * but that's not what I want.  Don't allocate any other vectors, and
 * don't use the "erase" function either.  Just rearrange the elements
 * somehow and then call V.resize(...). */

// vim:foldlevel=2
