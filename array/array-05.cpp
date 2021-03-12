#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int k) {
	sort(a, a+k);
	sort(a+k, a+n, greater<int>());
}

int main() {
	int size, k;
	cin >> size >> k;

	int *arr = new int[size];

	for(int i = 0; i < size; ++i) { cin >> arr[i]; }

	solve(arr, size, k);
	
	for(int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
}