#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;

    // constractor
    Student(int roll,int cls,double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa =gpa;
    }
};
Student* fun(){
    Student Ashab(6,10,4.52);
    Student *p=&Ashab;
    return p;
}
int main(){
    Student* p = fun();
    // Student Sohel(7,10,4.65);

    cout<<p->roll<<" "<<p->cls<<" "<<p->gpa<<endl;
    // cout<<Sohel.roll<<" "<<Sohel.cls<<" "<<Sohel.gpa<<endl;
}