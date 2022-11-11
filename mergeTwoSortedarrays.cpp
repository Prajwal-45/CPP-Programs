#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    int arr1[]={1,2,3,0,0,0};
    int arr2[]={4,5,6};
    int m=3,n=3;
    int j=0;
    for(int i=n;i<m+n;i++){
        arr1[i]=arr2[j];
        j++;
    }
    for(int i=0;i<m+n;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}
