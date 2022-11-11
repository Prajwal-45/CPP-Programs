#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int size,val;
    cout<<"enter the size of vector=";
    cin>>size;
    for(int i=0;i<size;i++){
     cin>>val;
     v.push_back(val);
    }


    
    cout<<"1st element="<<v.front()<<endl;
    cout<<"last element="<<v.back()<<endl;
    cout<<"size of vector="<<v.size()<<endl;
    cout<<"capacity of vector="<<v.capacity()<<endl;
}