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
            word.erase(remove(word.begin(),word.end(),'"'),word.end());
            if(find(word.begin(),word.end(),'>') != word.end())
            word.pop_back();
            velement.push_back(word);  
        }while(iss);
        v.push_back(velement);
        }
        else
        {
        getline(cin,temp);
        if(find(temp.begin(),temp.end(),' ') != temp.end()){
            return 0;
        }
        else{
            vector<string> velement;
            velement.push_back(temp);
            v.push_back(velement);
        }
        }
    }

    // for(auto i=v.begin();i!=v.end();i++){
    //      for(auto j=*(i).begin();j!=*(i).end();j++){
    //          cout<<*j;
    // }
    //

int j = v.size()-1;
bool t = true;
for(auto index=0;index<v.size()/2;index++){
    v[j][0].erase(remove(v[j][0].begin(),v[j][0].end(),'/'),v[j][0].end());
    if(v[index][0]+">"!=v[j][0]){
    t = false;
    break;
    }
    j--;
}

if(t==false){
    return 0;
}





    while(q){
        string temp,word;
        vector<string> t;
        cin>>temp;
        // if(find(temp.begin(),temp.end(),'~') == temp.end())
        if(count(temp.begin(),temp.end(),'~')==0||count(temp.begin(),temp.end(),'~')>1)
        {
            cout<<"Not Found!"<<endl;
        }
        else{
        word = "";
        for(char c : temp){
            if(c=='.'||c=='~'){
                t.push_back("<"+word);
                word = "";
            }
            else{
                word = word + c;
            }
        }
        t.push_back(word);

        }

        for(auto index=0;index<t.size();index++){
        if(index == (t.size()-1)){
            auto valueref = find(v[index-1].begin(),v[index-1].end(),t[index]);
            if(valueref != v[index-1].end()){
            string temp = *(valueref+2);
            //temp.erase(temp.begin());
            //temp.erase(temp.end()-1);
            //temp.erase(temp.end()-1);
            cout<<temp<<endl;
            }
            else
            cout<<"Not Found!"<<endl;
            
        }
        else if((t[index] !=v[index][0])){
            cout<<"Not Found!"<<endl;
            break;
        }
        }
        q--;
    }
    

}
