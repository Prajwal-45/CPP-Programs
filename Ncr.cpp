#include<iostream>
using namespace std;
int facto(int n){
    int ans =1;
    for (int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int nCr(int n,int r){
    int num=facto(n);
    int denom=facto(r)*facto(n-r);
    int final=num/denom;
    cout<<"The NCR of given expression is="<<final;


}
int main(){
    int n,r;
    cin>>n;
    cin>>r;
    nCr(n,r);
    return 0;
}