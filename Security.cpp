#include<iostream>
#include<math.h>
using namespace std;
long long int power(long long int x,long long int y,long long int n){
    if(y==1){
        return x;
    }
    else{
        return (((long long int)pow(x,y))%n);
    }
}



int main()
{
    long long int n,q,x,a,y,b,k1,k2;
    n=23;
    cout<<"The value of P:";
    cin>>n;
    q=9;
    cout<<"The value of G:";
    cin>>q;
    x=4;
    cout<<"The Private key a for Alice:";
    cin>>x;
    a=power(q,x,n);
    y=3;
    cout<<"The Private key b for Bob :";
    cin>>y;
    b=power(q,y,n);
     
    k1=power(b,x,n);
    k2=power(a,y,n);
    cout<<"Secret Key For Alice is :"<<k1<<endl;
    cout<<"Secret key For the Bob is : "<<k2<<endl; 

    return 0;
}

