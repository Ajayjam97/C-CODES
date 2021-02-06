#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    for(int i=0; i<5; i++)
    v.push_back(i);

    cout<<"Actual elements in the vector:   "<<setw(80)<<"Expected Output {0 1 2 3 4}  Actual Output{";
    //This loop cannot modify the value of elements present in the vector
    for(int x: v){
    cout<<x<<" ";
    x++;
    }
    cout<<"}"<<endl;

    cout<<"After incrementing each element in the vector (using value):   "<<setw(50)<<"Expected Output {1 2 3 4 5}  Actual Output{";
    //This loop can modify the value of elements present in the vector as it uses reference
    for(int &x: v){
    cout<<x<<" ";
    x++;
    }
    cout<<"}"<<endl;

    cout<<"After incrementing each element in the vector (using reference):   "<<setw(46)<<"Expected Output {1 2 3 4 5}  Actual Output{";
   
    for(int x: v){
    cout<<x<<" ";
    }
    cout<<"}"<<endl;

    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(20);

    cout<<"Vector after pushing three 10 and one 0 value:"<<setw(25);
    for(int x: v){
    cout<<x<<" ";
    }
    cout<<endl;

    vector<int>::iterator it1 = lower_bound(v.begin(),v.end(),10);
    vector<int>::iterator it2 = upper_bound(v.begin(),v.end(),10);

    cout<<"Using iterator to count occurence of the element 10: "<<setw(18)<<it2-it1 <<endl;

    

    return 0;
}
