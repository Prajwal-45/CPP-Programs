#include<iostream>
#include<vector>
using namespace std;
int ansIs(int arr[],int n,int s){
    int i=0;
    int j=0;
    int sum=0;

   while(j<n){
     sum= sum+arr[j];
    if(sum==s && i<j){
        cout<<i+1<<endl;
        cout<<j+1;
        
    }
    while(sum>s){
          sum=sum-arr[i];
          i++;
    

    }
    j++;

   }


}
int main(){
    
    int arr[]={1,2,3,7,5};
    int s=12;
    int n=5;
    ansIs(arr,n,s);
}