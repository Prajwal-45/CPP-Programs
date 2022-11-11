#include<iostream>
#include<math.h>
using namespace std;
void solve(string str,int i,string ans){
    if(i==str.length()){
        cout<<ans<<endl;
        return;
    }
    //include
    solve(str,i+1,ans+str[i]);
    //exclude
    solve(str,i+1,ans);
}

int main(int argc, char const *argv[])

{
    string str="abcd";
    string ans=" ";
    solve(str,0,ans);
    cout<<pow(2,str.length());

    return 0;
}
