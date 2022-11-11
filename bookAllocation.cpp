#include<iostream>
using namespace std;
bool isPossible(int arr[],int m, int n,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;

}
int binarySearch(int arr[],int m,int n){
    int start=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(isPossible(arr,m,n,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;

    }
    return ans;
}
int main(){
    int n;
    cout<<"Size of an array ="<<endl;
    cin>>n;
    int arr[n];
   cout<<"Enter array elements="<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=2;
  cout<<"After the book allocation ans is="<<binarySearch(arr,m,n)<<endl;
}