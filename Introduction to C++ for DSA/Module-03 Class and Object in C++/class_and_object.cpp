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
    a.roll = 6;
    a.gpa = 4.61;
    char temp[100] = "Ashab";
    strcpy(a.name,temp);

    cout<<a.name<<" "<<a.roll<<" "<<a.gpa;
    return 0;
}