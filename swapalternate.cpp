 #include<iostream>
 using namespace std;
 int swapAlternate(int a[], int size){
        for (int i=0 ; i<size;i+=2){
            if(i+1<size){
                swap(a[i],a[i+1]);
            }
          }
  }

void printArray(int a[],int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    } 

}

  int main(){
      int a[100],size;
      cout<<"Enter size of an array=";
      cin>>size;
      cout<<"Enter the array elements=";
      for(int i=0 ; i < size ;i++){
          cin>>a[i];
      }
    swapAlternate(a,size);
      printArray(a,size);
      return 0;
  }