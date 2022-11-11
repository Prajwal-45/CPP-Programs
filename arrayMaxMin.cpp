#include <iostream>
#include<climits>
using namespace std;
int getMax(int a[],int size){
    int max= INT_MIN;
    for(int i=0;i<size;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int getMin(int a[],int size){
    int min= INT_MAX;
    for(int i=0;i<size;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

int main() {
    int a[500];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Max value in arr= "<<getMax(a,size)<<endl;
cout<<"Min value in arr= "<<getMin(a,size)<<endl;
    
    
    return 0;
}