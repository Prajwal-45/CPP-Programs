#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main(){
    array<int,500>n; 
    array<int,500>m;
    int a,b;
    cout<<"Size of a 1st array=";
    cin>>a;
    cout<<"Size of an 2nd array=";
    cin>>b;
    for(int i=0;i<a;i++){
        cin>>n[i];
    }
    cout<<endl;
    for(int i=0;i<b;i++){
        cin>>m[i];
    }
    cout<<endl;
    int x=max(a,b);
    for(int i=0;i<x;i++){
        if(binary_search(m.begin(),m.end(),n[i])){
            cout<<n[i]<<" ";
        }
    }

}