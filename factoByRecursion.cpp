#include<iostream>
using namespace std;
long double facto(int n){
    if(n==0){
        return 1;
    }
    long double ans=n*facto(n-1);
    return ans;


}
int  main(){
    int ans;
    int n;
    cout<<"Enter the n:-";
    cin>>n;
    cout<<facto(n);
    
}
