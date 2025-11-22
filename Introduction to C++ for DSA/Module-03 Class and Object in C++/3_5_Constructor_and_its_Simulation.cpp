#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;

    // constractor
    Student(int r,int c,double g){
        roll = r;
        cls = c;
        gpa =g;
    }
};
int main(){
    Student Ashab(6,10,4.52);
    Student Sohel(7,10,4.65);

    cout<<Ashab.roll<<" "<<Ashab.cls<<" "<<Ashab.gpa<<endl;
    cout<<Sohel.roll<<" "<<Sohel.cls<<" "<<Sohel.gpa<<endl;
}