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
        getline(cin,temp);

        if(find(temp.begin(),temp.end(),'/') == temp.end())
        {
        
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
        cout<<endl;
        v.push_back(velement);
        }
        else
        {
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
        cout<<t[index]<<" "<<v[index][0]<<endl;
        if(index == (t.size()-1)){
            auto valueref = find(v[index-1].begin(),v[index-1].end(),t[index]);
            if(valueref != v[index-1].end()){
            string temp = *(valueref+2);
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
