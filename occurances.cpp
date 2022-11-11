#include<iostream>
using namespace std;
firstOcc(int arr[],int n, int key){
    int s=0,e=n-1,ans=-1;
   int mid=(s+e)/2;
   while(s<=e){
       if (arr[mid]==key){
           ans=mid;
           e=mid-1;
       }
       else if(arr[mid]>key){
           e=mid-1;
       }
       else if(arr[mid]<key){
           s=mid+1;
       }
       mid=(s+e)/2;
   }
   return ans;
}
lastOcc(int arr[],int n, int key){
    int s=0,e=n-1,ans=-1;
   int mid=(s+e)/2;
   while(s<=e){
       if (arr[mid]==key){
           ans=mid;
           s=mid+1;
       }
       else if(arr[mid]>key){
           e=mid-1;
       }
       else if(arr[mid]<key){
           s=mid+1;
       }
       mid=(s+e)/2;
   }
   return ans;
}
int main(){
    int arr[500];
    int n;
    int key;
    cout<<"Enter size of array elements =";
    cin>>n;
    cout<<"Enter array elements =";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter key element whose occurance to find =";
    cin>>key;
    cout<<"First occurance of key is= "<<firstOcc(arr,n,key)<<endl;
    cout<<"Last occurance of key is= "<<lastOcc(arr,n,key)<<endl;

}