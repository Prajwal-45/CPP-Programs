#include<iostream>
#include<array>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    array<int,500>arr;
    set<int>p;
    vector<int> ans;
    int x,y;
    int s;
    int key;
    cout<<"enter size of vector=";
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>arr[i];
         
    } 
    cout<<"Enter key as target=";
    cin>>key;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
          if(arr[i]+arr[j]==key){
              
            
              ans.push_back(arr[i]);
              ans.push_back(arr[j]);


          }
        }
        sort(ans.begin(),ans.end());
        for (auto i:ans){
            p.insert(i);
        }
    
        for(auto i= p.begin();i!=p.end();i++){
            cout<<*i<<" ";
        }
        
        
    }

}