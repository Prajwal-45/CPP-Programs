#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    set<int>s;
    unordered_set <int>q;
    s.insert(5);
    s.insert(4);
    s.insert(8);
    s.insert(7);
    s.insert(6);
    int k=s.size();
    for(auto i:s){
        cout<<i<<endl;
    
    }
    cout<<"IS  6 PRESENT IN THE SET="<<s.count(6)<<endl;

    q.insert(5);
    q.insert(4);
    q.insert(8);
    q.insert(7);
    q.insert(6);

    for(auto i:q){
     cout<<i<<endl;
    }

}