#include<iostream>
using namespace std;
 int peakElement(int arr[], int size){
     int start = 0;
     int end = size;
     int mid = start + (end - start ) / 2;
     int ans = 0;
     while (start < end){

         if (arr[mid] < arr[mid+1]){
             start = mid+1;
         }
         else if (arr[mid] > arr[mid+1]){
             end = mid;
             
         }

         mid = start + (end - start ) / 2;

     }
     return start;

 }

int main(){
    int arr[]={ 1,2,3,4,8,9,5,4,3,2,1};

    cout << " The peak element is at position = " << peakElement(arr,11);


}