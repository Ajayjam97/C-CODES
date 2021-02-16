#include<iostream>
#include<vector>


using namespace std;

int main(){

       int arr[5];
       for(int i=0; i<5; i++)
       cin>>arr[i];
       //Traversal
       for(int x:arr)
       cout<<x<<" ";
       //Insertion at end
       int el;
       cin>>el;
       arr[5]=el;
       cout<<"Inserting an element at last"<<endl;
       for(int i=0; i<6; i++)
       cout<<arr[i]<<" ";

  
}