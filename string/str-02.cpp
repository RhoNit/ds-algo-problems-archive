#include <bits/stdc++.h>
using namespace std;

bool isSubSequence(char s1[], char s2[], int x, int y) {
	int j = 0;
	for(int i = 0; i < y && j < x; ++i) {
		if(s2[i] == s1[j]) {
			j += 1;
		}
	}
	if(j != x)
		return false;
	return true;
}

/*Recursive way to implement it
bool isSubSequence(char s1[], char s2[], int x, int y) {
	//base condition
	if(x == 0) { return true; }
	if(y == 0) { return false; }
	
	if (str1[x - 1] == str2[y - 1])
        	return isSubSequence(str1, str2, x - 1, y - 1);
	
	return isSubSequence(str1, str2, x, y - 1);
}
*/

int main() {
	char str1[] = "ranit";
	char str2[] = "franticbutmindtree";
	int l1 = strlen(str1);
	int l2 = strlen(str2);

	bool var = isSubSequence(str1, str2, l1, l2);

	if(var == true) {
		cout << "Voila... It's a sub-sequence of str2" << endl;
	}
	else {
		cout << "Oopsie... It's not a sub-sequence" << endl;
	}
}
