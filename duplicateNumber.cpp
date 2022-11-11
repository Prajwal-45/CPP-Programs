#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,500>arr;
    int a;
    cout<<"Enter size of an array=";
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int i=0;i<a;i++){
        for(int j=a-1;j!=i;j--){
            if(arr[i]==arr[j]){
                cout<<"The repeating Element is:"<<arr[i]<<endl;
                
            }
        }
    }
}