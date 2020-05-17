#include <iostream>
using namespace std;

int prod_sub_arr(int arr[], int size) {
	int product = 1;
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size-i; j++)
			for(int k = i; k <= i+j; k++)
				product *= arr[k];
	cout << product;
}

int main() {
	int s;
	cout << "Enter the size of array:\n";
	cin >> s;
	int arr[s];

	cout << "Enter the array elements:\n";
	for(int i = 0; i < s; i++)
		cin >> arr[i];
	 
	prod_sub_arr(arr,s);
	return 0;
}