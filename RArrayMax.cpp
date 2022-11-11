#include<iostream>
#include<math.h>

using namespace std;

void getMax(int arr[],int size,int maxi,int index){
    if(index==size){
        cout<<maxi;
    }
    maxi=max(maxi,arr[index]);
    getMax(arr,size,maxi,index+1);
    int ans=maxi;
   
    
}
int main()
{
    int arr[]={5,9,22,45,89,80,55};
    int size=7;
    int maxi=INT16_MIN;
    getMax(arr,size,maxi,0);
    return 0;
}
