//https://www.hackerrank.com/challenges/arrays-introduction/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void PrintReverse(int* arr,int n){
    cout<<arr[n]<<" ";
    if(n!=0)
    PrintReverse(arr,n-1);
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    PrintReverse(arr,n-1);
    return 0;
}
