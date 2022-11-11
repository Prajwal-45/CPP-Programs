#include<iostream>
using namespace std;


uniqueElement(int arr[], int n)
{
	// Write your code here
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];
		
	}
	return ans;
}
int main(){
    int n,arr[500];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< uniqueElement(arr,n)<<endl;
   return 0;

}