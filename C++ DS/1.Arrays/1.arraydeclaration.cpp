#include<iostream>
#include<vector>


using namespace std;

int main(){

    int size;
    cin>>size;
    int *parr = new int[size];
    int arr[size];
    //vector<int> v(5,0);
    vector<int> v;

    for(int i=0;i<2*size;i++){
    cin>>arr[i];
    cin>>parr[i];
    //cin>>v[i];
    //v.push_back(i+1);
    v.emplace_back(i+1);
    }

    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
     for(int i=0; i<2*size; i++){
        cout<<*(parr+i)<<" ";
    }
    cout<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
  
}