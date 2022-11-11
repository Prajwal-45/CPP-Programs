#include<iostream>
using namespace std;
int main(){
    int n,m,o;
    cout << "Enter the value whose notes to be counted= ";
    cin>>n;
    m=n/100;
    o=n-(m*100);
    cout<<"NO OF 100 NOTES:-"<<m<<endl;
    o=o/20;
    cout<<"no. of notes of 20 are:-"<<o<<endl;
    int k= n - ((m*100)+(o*20));
    k=k/10;
    cout<<"No. of notes of 10 are:-"<<k<<endl;
}
  