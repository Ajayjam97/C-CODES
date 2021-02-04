#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    string s;

    //Case1: getline after getline works 
    //getline(cin,s);
    //getline(cin,s);
    
    //Cas2: cin after getline works
    //getline(cin,s); 
    //cin>>a;

    //Case3: cin before getline does not works
    //cin>>a;
    //getline(cin,s);

    //Case4: cin>>string before cin>>int does not work 
    //cin>>s;
    //cin>>a;

    //Case4: cin>>int before cin>>string works 
    //cin>>a;
    //cin>>s;
    
    cin>>a;
    getline(cin,s);

    cout<<s<<endl;
    cout<<a<<endl;

    cout<<"This code did not work as \\n remained in the buffer and was pushed in stdin by cin>>a statement instead of a"<<endl;
    cout<<"Note: cin ignores white spaces and \n but getline doesnot."
}