#include<bits/stdc++.h>
using namespace std;
int main(){
    //assign string
    string s = "Hello World";
    // string s2 = "Gello";
    // s = s2;
    //s.assign(s2);//same as s=s2;
    //erase(start index)function erase the at last
    // s.erase(5); 
    s.erase(5,3); 

    cout<<s<<endl;
    return 0;
}