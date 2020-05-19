#include <iostream>
using namespace std;

int max_of_subarr(int arr[], int n, int k) {
	int p = 0, q = k-1, temp = p;
	int max = arr[k-1];

	while(q != n) {
		if(arr[p] > max)
			max = arr[p];
		++p;

		if(p == q && q <= n) {
			cout << max << "--";
			++q;
			p = ++temp;
			max = arr[q];
		}
	}

	if(k == 1)
		for(int i = 0; i < n; i++)
			cout << arr[i] << "--";

	return 0;
}

int main() {
	int size, k;
	cout << "Enter the number of array elments:\n";
	cin >> size;
	cout << "Enter the number of elements in all sub-arrays:\n";
	cin >> k;
	int arr[size];

	cout << "Enter the elements of array:\n";
	for(int i = 0; i < size; i++)
		cin >> arr[i];

	max_of_subarr(arr, size, k);
	return 0;
}