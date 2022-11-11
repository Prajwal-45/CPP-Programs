#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>p;
    priority_queue<int,vector<int>,greater<int> >m;
    p.push(3);
    p.push(8);
    p.push(9);
    p.push(100);
    int a=p.size();
    for(int i=0 ;i<a;i++){
        cout<<p.top()<<" ";
        p.pop();
        }
        cout<<endl;
     m.push(3);
     m.push(8);
     m.push(9);
     m.push(100);
    int l=m.size();
    for(int i=0 ;i<l;i++){
        cout<<m.top()<<" ";
        m.pop();

    }
     
    
}