#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100001];
    
    while (cin.getline(s, 100001)) {
        int len = strlen(s);       
        sort(s, s + len);          
        cout << s;         
    }

    return 0;
}
