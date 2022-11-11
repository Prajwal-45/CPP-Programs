#include<iostream>
#include<array>
using namespace std;
binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
     int mid=(start+end)/2;

    while(start<=end){
    
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
        start=mid+1;

    }
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
    
}
return -1;
}
int main(){
    int n;
    int key;
    int arr[5000];
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key element :-";
    cin>>key;
  cout<<"Element fount at position:-"<<binarySearch(arr,n,key);
    
    
    
    
  
}