#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int val,size;
    cout<<"enter size=";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>val;
        v.push_back(val);
    }
   cout<<"checking 5 is present or not: "<<binary_search(v.begin(),v.end(),5)<<endl;
   cout<<"ITERETOR OF 5 IS: "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
   cout<<"upper bound: "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    int a=15,b=16;
    int d=min(a,b);
    cout<<"min is="<<d<<endl;
    string s="5 6 7 8 9";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    for(auto i:v){
        cout<<i<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
     
     for(auto i:v){
        cout<<i<<endl;
    }


}
