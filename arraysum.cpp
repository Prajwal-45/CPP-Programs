#include<iostream>
using namespace std;
int main(){
    int a[100],size;
    int sum=0;
    cout<<"Enter the size of an array=";
    cin>>size;
    cout<<"Enter the array elements=";
    for(int i=0 ; i<size ; i++){

        cin>>a[i];
    }
    for(int i=0 ; i<size ; i++){
        sum=sum+a[i];

    }
    cout<<" The sum of whole array elements is ="<<sum;
    return 0;
}