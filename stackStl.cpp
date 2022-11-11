#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("hey");
    s.push("hiiii");
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top();

}