//https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> temp;
    istringstream iss(str);
    
    do{
        int ivalue;
        char ch;
        iss>>ivalue;
        temp.push_back(ivalue);
        iss>>ch;
    }while(iss);
    
    return temp;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}