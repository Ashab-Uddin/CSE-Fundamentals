#include<bits/stdc++.h>
using namespace std;
int *p;
void fun(){
    int x=10;
    p=&x;
    cout<<"Fun ->"<<x<<endl;
    return;
}
int main(){
    fun();
    cout<<"Main ->"<<*p<<endl;

}