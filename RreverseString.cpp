#include<iostream>
#include<string.h>
using namespace std;
void solve(string &str, int i, int j){
    if(i>=j){
        return;
    }
    swap(str[i],str[j]);
    solve(str,i+1,j-1);
    

}
void Reverse(string &str,int i,string &ans){
    if(i==str.length()){
        return;
    }
    Reverse(str,i+1,ans);
    ans.push_back(str[i]);
 
    
    
}
int main(int argc, char const *argv[])

{
    string str;
    cout<<"Enter String to reverse:-";
    cin>>str;
   //solve(str,0,str.length()-1);
   //cout<<str;
   string ans;
   Reverse(str,0,ans);
   cout<<ans;
   
    
    
    return 0;
}
