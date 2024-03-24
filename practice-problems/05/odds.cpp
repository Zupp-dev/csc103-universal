/* TODO: write a function which takes a vector of integers V and an
 * integer d and returns another vector containing only the elements
 * of V which are divisible by d.  ("x is divisible by d" means that
 * there exists another integer q such that x == dq.  That is, when
 * you divide x by d, there's no remainder.) */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void kratos(vector<int>& V, int d);

int main()
{
	int v, d;
	vector<int> V;
	cout << "Enter target: "<< "\n";
	cin >> d;
	cout << "Enter list: " << "\n";
	while(cin >> v){
		V.push_back(v);
	}
	kratos(V, d);
	cout << "#'s in list divisble by target are: " << "\n";
	for(size_t i = 0; i < V.size(); i++){
		cout << V[i] << " ";
	}
	cout << "\n";
	return 0;
}

void kratos(vector<int>& V, int d){
	int writeIndex = 0;
	for(size_t i = 0; i < V.size(); i++){
		if(V[i] % d == 0){
			V[writeIndex] = V[i];
			writeIndex++;
		}
	}
	V.resize(writeIndex);
}
// vim:foldlevel=2
