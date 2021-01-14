#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 9;
    string s;

    cin>>s; 
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin>>a;

    cout<<s<<endl;
    cout<<a<<endl;

    cout<<"Here Input buffer got flushed, that is why it worked"<<endl;

}