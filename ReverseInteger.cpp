#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no to be reverse=";
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit=n%10; 
        ans=ans*10+digit;
        n=n/10;
    }  
    cout<<"Answer is=="<<ans;

}