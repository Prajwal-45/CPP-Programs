#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
vector<int> reverse(vector<int>v){
    int start=0;
    int end=v.size()-1;
    while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}
printAns(vector<int>v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}

int main()
{
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
   
    vector<int>ans=reverse(v);
    printAns(ans);
    cout<<endl;
    cout<<v.capacity(); 
    cout<<endl;  
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 

    
    return 0;
}
