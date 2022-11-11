#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the no to be converted=";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n%10;
        if(bit==1){
            ans=pow(2,i)+ans;
            
        }
        n=n/10;
        i++;
    }
    cout<<"The converted no. to decimal=="<<ans<<endl;
}