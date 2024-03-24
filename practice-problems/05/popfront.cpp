/* TODO: write a function called "pop_front" which will remove the first
 * element of a vector.  NOTE: unlike pop_back, which is a *member function*
 * of the vector, your function will take a vector parameter.  So instead of
 * calling V.pop_front(), you would do pop_front(V).  Use the function header
 * given below. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::out_of_range;

/* your answer goes here: */
void pop_front(vector<int>& V)
{
	if(V.empty()){
		throw out_of_range("Vector is empty");
	}
	V.erase(V.begin());
}

int main()
{
	int x;
	vector<int> V;
	cout << "Input list of vectors." << "\n";
	while(cin >> x){
		V.push_back(x);
	}
	cout << "      " << V.size() << "       ";
	pop_front(V);
	for(size_t i = 0; i < V.size(); i++){
		cout << V[i] << " ";	
	}
	cout << "\n";
	return 0;
}

// vim:foldlevel=2
