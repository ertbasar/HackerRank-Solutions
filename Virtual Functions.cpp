#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int cur_id_s = 1;
static int cur_id_p = 1;
class Person{
public:
    int age;
    string name;
    virtual void getdata(){}
    virtual void putdata(){}
};

class Professor: public Person{
    int publications;
    int cur_id;
public:
    void getdata(){
        cin >> name >> age >> publications;
        cur_id = cur_id_p;
        cur_id_p++;
    }
    void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id << "\n";
    }
};

class Student: public Person{
    int marks[6];
    int cur_id;
public:
    void getdata(){
        cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
        cur_id = cur_id_s;
        cur_id_s++;
    }
    void putdata(){
        cout << name << " " << age << " " << marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5] << " " << cur_id << "\n";
    }
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
