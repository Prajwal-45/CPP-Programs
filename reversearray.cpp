#include<iostream>
using namespace std;
  reverseArray(int a[], int size){
      int start=0;
      int end=size-1;
      while(start <= end){
          swap(a[start],a[end]);
          start++;
          end--;
      }
  }

printArray(int a[],int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    } 

}

  int main(){
      int a[100],size;
      cout<<"Enter size of an array=";
      cin>>size;
      cout<<"Enter the array elements=";
      for(int i=0 ; i < size ;i++){
          cin>>a[i];
      }
      reverseArray(a,size);
      printArray(a,size);
      return 0;
  }