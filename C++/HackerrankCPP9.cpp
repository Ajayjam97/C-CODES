//https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    std::ios_base::sync_with_stdio(false);
    
    int n,q;
    cin>>n>>q;
    vector<vector<int>> a;

    while(n){
        vector<int> temp;
        int i,size;
        cin>>size;
        temp.push_back(size);
        while(size){
            cin>>i;
            temp.push_back(i);
            size--;
        }
        a.push_back(temp);
        n--;
    }

    while(q){
        int aindex,aiindex;
        cin>>aindex>>aiindex;
        auto r = a[aindex].begin();
        cout<<*(r+aiindex+1)<<endl;
        q--;
    }

}
