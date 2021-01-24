#include <iostream>

using namespace std;

void increment(int a);      //Call By Value
void increment(int* a);     //Call By Address
void refincrement(int& a);  //Call By Reference

//Overloaded functions differentiate between argument types that take different initializers.
//Therefore, an argument of a given type and a reference to that type are considered the same for the purposes of overloading. 
//They are considered the same because they take the same initializers.
//Thus, here int a and int& a have the same intializers leading to ambiguity.

int main()
{
    int a;
    cin>>a;
    cout<<"Value of a at start: "<<a<<endl;
    increment(a);
    cout<<"Value of a after Call By Value: "<<a<<endl;
    increment(&a);
    cout<<"Value of a after Call By Address: "<<a<<endl;
    refincrement(a);
    cout<<"Value of a after Call By Reference: "<<a<<endl;
}

void increment(int a){
    a++;
}

void increment(int* a){
    (*a)++;
}

void refincrement(int& a){
    a++;
}