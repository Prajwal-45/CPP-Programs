#include<iostream>
#include<math.h>

using namespace std;

int findOccurance(int arr[],int size,int index,int target){
    if(index==size){
        return -1;
    }
   if(arr[index]==target){
    return index;
   }
   findOccurance(arr,size,index+1,target);
    


   
    
}
int main()
{
    int arr[]={5,9,2,45,89,2,55};
    int size=7;
    int target=2;
   cout<<findOccurance(arr,size,0,target);
    return 0;
}