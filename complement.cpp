#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no to be complemented=";
    cin>>n;
    int mask=0;
    int m=n;
    
    while(n!=0){
     mask= (mask<<1) | 1;
     n=n>>1;       
    }
    int ans= (~m) & mask;
    cout<<"Answer is =="<<ans;
    return 0;
}