#include<iostream>
using namespace std;
 int pivotElement(int arr[], int size){
     int start = 0;
     int end = size;
     int mid = start + (end - start ) / 2;
     int ans = 0;
     while (start < end){

         if (arr[mid] >= arr[0]){
             start = mid+1;
         }
         else{
             end = mid;
             
         }

         mid = start + (end - start ) / 2;

     }
     return start;

 }
 binarySearch(int arr[],int s,int n,int key){
    int start=s;
    int end=n;
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
    int arr[]={ 9,10,1,2,3,5};
    int key=3;
    int n=6;
    int Pivot= pivotElement(arr,6);
    if(key>=arr[Pivot] && key<= arr[n-1]){
        cout<<binarySearch(arr,Pivot,n-1,key);
    }
    else{
        cout<<binarySearch(arr,0,Pivot-1,key);
    }

}