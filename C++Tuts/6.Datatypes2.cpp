#include <iostream>

using namespace std;

//a function type called sum
int sum(int x,int y){
    return x+y;
}

int main()
{
      cout<<"Value in function type sum(4,6): "<<sum(4,6)<<endl;
      int arr[5] = {1,2,3,4,5};
      cout<<"Values in array arr of integer type: ";
      for(int element: arr){cout<<element<<",";}
      cout<<"\b \b"<<endl;
      // "\b \b" moves the cursor back one space, then writes a space to erase the character, and backspaces again so that new writes start at the old position. The \b by itself only moves the cursor.
      int *p = arr;
      cout<<"Value in pointer p of integer type: "<<p<<endl;
      int& ref = arr[4];
      cout<<"Value in reference ref of integer type: "<<ref<<endl;
}