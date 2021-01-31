#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
protected: 
string name;
int age;
public:
virtual void getdata(){
    cin>>name>>age;
}
virtual void putdata(){
    cout<<name<<" "<<age<<endl;
}
};

class Professor: public Person{
static int cur_id;
protected:
int publications;
public:
vector<int> count;
Professor(){
    cur_id++;
    count.push_back(cur_id);
}
void getdata(){
    cin>>name>>age>>publications;
}
void putdata(){
    cout<<name<<" "<<age<<" "<<publications<<" "<<count.front()<<endl;
}
};

int Professor::cur_id;

const int size=6;

class Student: public Person{
static int cur_id;
protected:
int marks[size];
public:
vector<int> count;
Student(){
    cur_id++;
    count.push_back(cur_id);
}
void getdata(){
    cin>>name>>age;
    for(int i=0; i<size; i++)
    cin>>marks[i];
}
void putdata(){
    cout<<name<<" "<<age<<" "<<sum()<<" "<<count.front()<<endl;
}
private:
int sum(){
    int sum=0;
    for(int i=0; i<size; i++)
    sum=sum+marks[i];
    return sum;
}
};

int Student::cur_id;

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

    for(int i=0;i<n;i++){
        per[i]->putdata(); // Print the required output for each object.
    }

    return 0;

}
