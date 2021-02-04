#include<iostream>

using namespace std;

int main(){

    int size;
    cin>>size;
    int *parr;
    int arr[size];
    parr = new int[size];

    for(int i=0;i<2*size;i++){
    cin>>arr[i];
    cin>>parr[i];
    }

    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
     for(int i=0; i<2*size; i++){
        cout<<*(parr+i)<<" ";
    }
    cout<<endl;
  
}