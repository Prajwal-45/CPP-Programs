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

int main(){
    int arr[]={ 9,10,1,2,3,5};

    cout << " The Pivot Element Position = " << pivotElement(arr,6);


}