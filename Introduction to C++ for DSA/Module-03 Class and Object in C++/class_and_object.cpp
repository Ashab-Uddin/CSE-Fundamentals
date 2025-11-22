#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main(){

    Student a; //user define variable is a object
    Student b;
    // a.roll = 6;
    // a.gpa = 4.61;
    // char temp[100] = "Ashab";
    // strcpy(a.name,temp);

    cin>>a.name>>a.roll>>a.gpa;
    cin>>b.name>>b.roll>>b.gpa;

    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;
    return 0;
}