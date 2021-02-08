#include<iostream>
#include<utility> //Includes pair
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<iomanip>
#include<algorithm>
#include<set>

using namespace std;

bool gt(int x, int y){
    return (x>y);
}



void UsePair(){
    pair<int, int> p;
    p = {1,2};
    cout<<"Initializing pair using {} brackets:    ";
    cout<<p.first<<" "<<p.second<<endl;
    p = make_pair(2,1);
    cout<<"Initializing pair using make_pair():     ";
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, char> parr[26];
    string str = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i < str.size(); i++)
    parr[i] = make_pair(i+1,str[i]);

    for(auto a: parr)
    cout<<a.first<<"("<<a.second<<") ";
    cout<<endl;
}


void UseVector(){
  vector<int> v;
    for(int i=0; i<5; i++)
    v.emplace_back(i);

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

    if(binary_search(v.begin(),v.end(),10))
        cout<<"Used binary search and found the value 10"<<endl;
    else
        cout<<"Value 10 was not found using bineary search"<<endl;


    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"After removing 4 elements from the back:"<<setw(31);

    for(int x: v){
    cout<<x<<" ";
    }
    cout<<endl;


    if(binary_search(v.begin(),v.end(),10))
        cout<<"Used binary search and found the value 10"<<endl;
    else
        cout<<"Value 10 was not found using binary search"<<endl;


    sort(v.begin(),v.end(),gt);

    cout<<"Vector after sorting using comparator:"<<setw(33);
    for(int x: v){
    cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Element present at index 2:"<<setw(44)<<v.at(2)<<endl;

    cout<<"Number of elements in the vector: "<<setw(37)<<v.size()<<endl;
    cout<<"Current capacity of the vector: "<<setw(40)<<v.capacity()<<endl;

    if(v.empty()){
        cout<<"Vector is empty"<<endl;
    }
    else{
        cout<<"Vector is not empty"<<endl;
    }

    cout<<"Clearing vector......................................."<<endl;
    v.clear();

     if(v.empty()){
        cout<<"Vector is empty"<<endl;
    }
    else{
        cout<<"Vector is not empty"<<endl;
    }


}



void UseList(){

list<int> ls;
ls.push_back(1);
ls.push_front(2);
ls.push_back(3);
ls.push_front(4);
ls.emplace_back(5);
ls.emplace_front(6);

    for(int x: ls){
    cout<<x<<" ";
    }
    cout<<endl;

    ls.sort();
    
    for(int x: ls){
    cout<<x<<" ";
    }
    cout<<endl;

}





void UseDeque(){

deque<int> dq;
dq.push_back(1);
dq.push_front(2);
dq.push_back(3);
dq.push_front(4);
dq.emplace_back(5);
dq.emplace_front(6);

    for(int x: dq){
    cout<<x<<" ";
    }
    cout<<endl;

    sort(dq.begin(),dq.end());
    
    for(int x: dq){
    cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Deque is similar to vector & list and it also has front & back methods:"<<endl;
    cout<<"Deque Front: "<<dq.front()<<"        Deque Back: "<<dq.back()<<endl;

}



void UseStack(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);

    cout<<"Size of the stack is: "<<s.size()<<endl;
    cout<<"Stack only shows the top element: "<<s.top()<<endl<<"Poping the top element.............."<<endl<<"After poping the top element the new top element is: ";
    s.pop();
    cout<<s.top()<<endl;
    cout<<"Size of the stack is: "<<s.size()<<endl;


}



void UseQueue(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.emplace(4);
    q.emplace(5);

    cout<<"Back of the queue: "<<q.back()<<endl;
    cout<<"Front of the queue: "<<q.front()<<endl;
    q.pop();
    cout<<"Back after poping:   "<<q.back()<<endl;
    cout<<"Front after poping:   "<<q.front()<<endl;

}




void UsePriorityQueue(){

    priority_queue<int> pq;
    pq.push(4);
    pq.push(3);
    pq.emplace(1);
    pq.emplace(5);
    pq.emplace(2);

    cout<<"Priority queue stores the elements in descending order, thus the top element will be: ";
    cout<<pq.top()<<endl;
    cout<<"After poping, the top element is:";
    pq.pop();
    cout<<pq.top()<<endl;

    priority_queue<int, vector<int>, greater<int>> gpq;

    gpq.push(4);
    gpq.push(3);
    gpq.emplace(1);
    gpq.emplace(5);
    gpq.emplace(2);

    cout<<"Priority queue stores the elements in descending order, thus the top element will be: ";
    cout<<gpq.top()<<endl;
    cout<<"After poping, the top element is:";
    gpq.pop();
    cout<<gpq.top()<<endl;


}




void UseSet(){

set<int> s;

s.insert(1);
s.insert(2);
s.insert(5);
s.insert(-1);
s.insert(10);
s.insert(1);

cout<<"Set implicitly sorts every element inserted into it (Uses BST at its core): ";

for(auto x: s){
    cout<<x<<" ";
}
cout<<endl;

auto it = s.find(2);
if(it==s.end()){
    cout<<"Element with value 2 is not Present";
}
else{
    cout<<"Element "<<*it<<" is present";
}
cout<<endl;

s.erase(2);
it = s.find(2);
if(it==s.end()){
    cout<<"Element 2 is not Present";
}
else{
    cout<<"Element "<<*it<<" is present";
}
cout<<endl;

}




void UseMultiSet(){

multiset<int> s;

s.insert(1);
s.insert(2);
s.insert(5);
s.insert(-1);
s.insert(10);
s.insert(1);

cout<<"Set implicitly sorts every element inserted into it (Uses BST at its core): ";

for(auto x: s){
    cout<<x<<" ";
}
cout<<endl;

auto it = s.find(2);
if(it==s.end()){
    cout<<"Element with value 2 is not Present";
}
else{
    cout<<"Element "<<*it<<" is present";
}
cout<<endl;

s.erase(s.find(1));
it = s.find(1);
if(it==s.end()){
    cout<<"Element 2 is not Present";
}
else{
    cout<<"Element "<<*it<<" is present";
}
cout<<endl;

cout<<"1 is still present because only one element got erased: ";

for(auto x: s){
    cout<<x<<" ";
}
cout<<endl;


}


void UseMap(){

    map<int, int> mp;

    mp.insert({1,0});
    mp.insert({3,2});
    mp[2] = 1;

    for(auto x: mp)
    cout<<x.first<<" "<<x.second<<endl;
}

void UseAlgos(){

    string str = "123";

    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));


    vector<int> v = {2,5,8,97,6,100,23,45};

    int max = *max_element(v.begin(),v.end());
    cout<<"Max element is:  "<<max<<endl;
}


int main(int argc, char const *argv[])
{
  
    //UseMap();
    UseAlgos();
    return 0;
}
