#include<iostream>
using namespace std;
void print(int n){
    if(n==1){
        return;
    }
    cout<<n;
    print(n-1+n-2);
}
int main(){
    int n=5;
    int a=0;
    int b=1;
    cout<<a;
    cout<<b;
    print(n);
}