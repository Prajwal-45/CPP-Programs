#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
   
    array<int,9>arr;
    int n;
    cin>>n;
    
   
    for(int i=0;i<n;i++){
    
    
        cin>>arr[i];
    }
   sort(arr.begin(),arr.end());
   
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}