#include <iostream>

using namespace std;

int i = 0;

class A{
    public: 
    int i = 3;

    void ival(int i){
        cout<<"Value of i in function scope: "<<i<<endl;
    }
};

int main()
{
    int i = 1;
    //int i = 2; //A new variable i cannot be created here because they both ahve the same scope.
    A a;
    {
        int i = 2;
        cout<<"Value of i in local scope: "<<i<<endl;
        cout<<"Value of i in global scope: "<<::i<<endl;
    }

    cout<<"Value of i in main function: "<<i<<endl;
    cout<<"Value of i in class scope: "<<a.i<<endl;
    a.ival(4);

}