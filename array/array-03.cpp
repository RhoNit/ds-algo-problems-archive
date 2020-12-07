#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int size, element;
	cout << "Enter the size of the array:\n";
	cin >> size;

	while(size--) {
		cout << "Enter the element: ";
		cin >> element;
		v.insert(v.begin(), element);
	}

	for(int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	
	return 0;
}
