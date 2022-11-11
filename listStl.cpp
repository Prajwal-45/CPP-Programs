#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    int size,val;
    cout<<"Enter size of list=";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>val;
        l.push_front(val);
    
    }
    for(int i:l){
        cout<<i<<endl;
    }
    
    
}