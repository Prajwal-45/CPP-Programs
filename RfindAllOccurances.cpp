#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

void allOccurance(int arr[],int size,int index,int target){
    
    if(index==size){
        return;
    }
   if(arr[index]==target){
    cout<<index<<" ";
   }
   allOccurance(arr,size,index+1,target);
   
    


   
    
}
int main()
{
    int arr[]={5,9,2,2,2,45,2,55,89,55};
    int size=10;
    int target=2;
   
    
   allOccurance(arr,size,0,target);

    return 0;
}