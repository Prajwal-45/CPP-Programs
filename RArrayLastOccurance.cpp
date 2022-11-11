#include<iostream>
#include<math.h>

using namespace std;

int lastOccurance(int arr[],int size,int index,int target){
    if(index<0){
        return -1;
    }
   if(arr[index]==target){
    return index;
   }
   lastOccurance(arr,size,index-1,target);
    


   
    
}
int main()
{
    int arr[]={5,9,2,2,2,45,2,55,89,55};
    int size=10;
    int target=2;
   cout<<lastOccurance(arr,size,size-1,target);
    return 0;
}