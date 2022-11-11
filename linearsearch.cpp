#include<iostream>
using namespace std;
bool found(int a[],int size,int key){
    for(int i=0; i<size;i++){
        if(key==a[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
      int a[100],size,key;
      cout<<"Enter size of an array=";
      cin>>size;
      cout<<"Enter the array elements=";
      for(int i=0 ; i < size ;i++){
          cin>>a[i];
      }
      cout<<"Enter the element to be searched=";
      cin>>key;
      if(found(a,size,key)){
          cout<<"Element found";
      }
      else{
          cout<<"Element not found";
      }
    
      
      return 0;
  }