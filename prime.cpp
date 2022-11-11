#include <iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<i<<" "<<" is the no. which Devides the given no "<<n<<endl;
            return 0;
            
        }
     }
     cout<<"No any no. other than 1 and given no divides the no."<<endl;
    return 1;
}

int main() {
    int n;
    cin>>n;
    
   if(isPrime(n)){
       cout<<"So no. is Prime";
   } 
   else{
       cout<<" so no. is not Prime";
   }

    
}