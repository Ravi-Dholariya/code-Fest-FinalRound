#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    int choice;
    cin>>choice;

    int count=0;
    while(1>0){
        if(a>=choice && count<5){
            cout<<a<<" ";
            count++;
        }
        if(count==5){
            break;
        }
        // cout<<a<<" "<<b<<endl;
        int t=b;
        b=a+b;
        a=t;

    }
    return 0;
}