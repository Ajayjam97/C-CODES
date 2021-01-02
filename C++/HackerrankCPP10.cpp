//https://www.hackerrank.com/challenges/attribute-parser/problem
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    std::ios_base::sync_with_stdio(false);
    int l,q;
    vector<vector<string>> v;
    cin>>l>>q;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    int lhalf = l/2;
    for(auto i=0;i<l;i++){
        string temp;
        if(i<lhalf)
        {
        getline(cin,temp);
        istringstream iss(temp);
        vector<string> velement;
        do{
            string word;
            iss>>word;
            velement.push_back(word);  
        }while(iss);
        v.push_back(velement);
        }
        else
        {
        cout<<"Line number "<<i<<":";
        getline(cin,temp);
        }
    }

    // for(auto i=v.begin();i!=v.end();i++){
    //      for(auto j=*(i).begin();j!=*(i).end();j++){
    //          cout<<*j;
    // }
    // }

   for(auto i=)
       cout<<*j;


    cout<<v[0][0]<<endl;
    cout<<v[0][1]<<endl;
    cout<<v[0][2]<<endl;
    cout<<v[1][0]<<endl;
    cout<<v[1][1]<<endl;
    cout<<v[1][2]<<endl;

   
    

}
