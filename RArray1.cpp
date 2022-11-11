#include<iostream>
using namespace std;
void solve(int arr[],int size,int i){
    //Base Case 
    if(i==size){
        return;
    }
    cout<<arr[i]<<" ";
    solve(arr,size,i+1);
 
}
int main(){
    int i=0;
    int arr[]={3,4,5,7,2,9,0};
    solve(arr,7,i);
}