#include<iostream>
#include<math.h>
using namespace std;
int main(){
int i=0,n;
cout<<"Enter the no which is to be check=";
cin>>n;
for(i=0;i<=30;i++){
    int ans=pow(2,i);
    if(ans==n){
        cout<<"The given number is in twos power";
        break;

    }

  }
}