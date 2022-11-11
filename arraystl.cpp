#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a;
    int size=a.size();
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Element at location 2 is="<<a.at(2)<<endl;//return the element AT SPECIFIC POSITION
    cout<<"Checks whether the array is empty or not="<<a.empty()<<endl;
    cout<<"1st Element of an array="<<a.front()<<endl;
    cout<<"last Element of an array="<<a.back()<<endl;


}