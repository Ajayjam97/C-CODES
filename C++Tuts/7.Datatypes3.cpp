#include <iostream>

using namespace std;

enum studentbool{off, on};

struct structstudent 
{
    short id;
    double marks;
};

union unionstudent
{
    short id;
    double marks;
};

class classuser
{
    private:
    int id;
    string name;

    public:
    void SetInfo(int Id, string Name){
            id = Id; 
            name = Name;
    }
    void GetInfo(){
        cout<<"ID: "<<id<<"\t"<<"NAME: "<<name<<endl;
    }
};

typedef int typedefint;


int main()
{
    cout<<off<<"\t"<<on<<endl;
    typedefint i =9;
    cout<<i<<endl;
    classuser c;
    c.SetInfo(1,"Jamwal");
    c.GetInfo();
    cout<<sizeof(unionstudent)<<endl;
    cout<<sizeof(structstudent)<<endl;

}