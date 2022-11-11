#include<iostream>
using namespace std;
#include<map>
int main(){
    map<int,string>m;
    m[1]="love";
    m[8]="you";
    m.insert({2,"hiii"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    
    }
    cout<<endl;
    m.erase(1);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    
    }

}