#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "hello world";
    cout<<s.size() <<endl;
    cout<<s.max_size() <<endl;
    cout<<s.capacity() <<endl;
    s.clear();//clear or remove the string
    if(s.empty()== true){
        cout<< "empty" <<endl;
    }
    else{
        cout << "Not empty" <<endl;
    }
    return 0;
}