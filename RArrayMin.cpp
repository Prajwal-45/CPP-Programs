#include<iostream>
#include<math.h>

using namespace std;

int getMin(int arr[],int size,int mini,int index){
    if(index==size){
        return mini;
    }
    mini=min(mini,arr[index]);
    getMin(arr,size,mini,index+1);
    


   
    
}
int main()
{
    int arr[]={5,9,22,45,89,2,55};
    int size=7;
    int mini=INT16_MAX;
    cout<<getMin(arr,size,mini,0);
    return 0;
}