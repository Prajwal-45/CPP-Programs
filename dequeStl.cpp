#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    int size,val;
    cout<<"Enter size of deque=";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>val;
        d.push_front(val);
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<d.at(i)<<endl;
    }
    cout<<d.size();
}