#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* TODO: As you may have seen in class, we can make functions which take *other
 * functions* as parameters.  Try to use this exciting new technology to write
 * a function called map which takes a vector of integers and a transformation
 * t which modifies a single integer, and then applies that transformation to
 * every element of the vector.  The following typedef is suitable for the
 * function type for t: */
typedef void (*transformation)(int&);
/* In case it helps, here is an example of a function of the above type: */

void map(vector<int>& V, transformation t){
	for(size_t i = 0; i < V.size(); i++){
		t(V[i]);
	}
}

void addone(int& x){
	x++;
}

void multiply(int& x){
	x *= 2;
}

void replace(int& x){
	if(x % 2 == 0){
		x = 1;
	}else{
		x = 0;
	}
}

/* your answer goes here... */

/* TODO: once you have the map function written, use it to
 * 1. increment every element of a vector (you can use addone above)
 * 2. multiply every element of a vector by 2
 * 3. replace each element with a 1 if it is even, and 0 if it is odd
 * */

int main()
{
	vector<int> V1 = {1, 2, 3, 4, 5};
	map(V1, addone);
	for(size_t i = 0; i < V1.size(); i++){
		cout << V1[i] << " ";
	}
	cout << "\n";



	vector<int> V2 = {1, 2, 3, 4, 5};
	map(V2, multiply);
	for(size_t i = 0; i < V2.size(); i++){
		cout << V2[i] << " ";
	}
	cout << "\n";
		
			
	vector<int> V3 = {1, 2, 3, 4, 5};
	map(V3, replace);
	for(size_t i = 0; i < V3.size(); i++){
		cout << V3[i] << " ";
	}
	cout << "\n";

	return 0;
}

// vim:foldlevel=2
