#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    string section;
    int tmarks;

    Student(int id, string name,string section, int tmarks) {
        this->id = id;
        this->name=name;
        this->section=section;
        this->tmarks = tmarks;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Student* s[3];

        for (int i = 0; i < 3; i++) {
            int id, marks;
            
            string name,section;

            cin >> id >> name >> section >> marks;
            s[i] = new Student(id, name, section, marks);
        }

       
        Student* best = s[0];
        for (int i = 1; i < 3; i++) {
            if (s[i]->tmarks > best->tmarks){
                best =s[i];
            }
               else if(s[i]->tmarks == best->tmarks && s[i]->id < best->id)
            {
                best = s[i];
            }
        }

        cout << best->id << " " << best->name << " "
             << best->section << " " << best->tmarks << "\n";


        for (int i = 0; i < 3; i++)
            delete s[i];
    }

    return 0;
}
