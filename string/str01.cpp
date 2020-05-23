#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main() {
    string s1, s2;
    cout << "Enter the first string:\n";
    cin >> s1;
    cout << s1 << endl;

    cout << "Enter the second string:\n";
    cin >> s2;
    cout << s2 << endl;
    if(s1.length()==s2.length()) {
        sort(s1.begin(), s1.end());
        cout << "Sorted first string is: " << s1 << endl;
        sort(s2.begin(), s2.end());
        cout << "Sorted second string is: " << s2 << endl;

        int comp = s1.compare(s2);
        if(comp == 0)
            cout << "Strings are anagram" << endl;
        else
            cout << "Strings are not anagram" << endl;
    }
    else
        cout << "Both strings entered are different" << endl;
    return 0;
}
