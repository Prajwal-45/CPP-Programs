#include<iostream>
using namespace std;
int power(){
    int a,b;
    int ans=1;
    cout<<"Enter the values of two no's=";
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
   int ans= power();
    cout<<"the power of given no. is="<<ans<<endl;
    int b=power();
    cout<<"another nos power="<<b<<endl;
}