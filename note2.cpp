//Using switch case
#include<iostream>
using namespace std;
int main(){
    int n,b,d,e,f,g,h,i;
    cout<<"Enter the value of which u have to calculate the notes=";
    cin>>n;
    int a=1;
    switch(a){
        case 1:
        { 
        b=n/100;
        cout<<"No. of 100 notes are="<<b<<endl;
        
        }
        
        case 2:
        {
        d=n-(b*100);
        e=d/50;
        cout<<"No. of 50's notes are="<<e<<endl;
        }

        case 3:
        {
        f=n-((b*100)+(e*50));
        g=f/20;
        cout<<"No. of 20's notes are:-"<<g<<endl;
        
        }
        case 4:
        {
         h=n-((b*100)+(e*50)+(g*20));
         i=h/10;
         cout<<"No. of 10's notes are:-"<<i;
        }
            
    }
}