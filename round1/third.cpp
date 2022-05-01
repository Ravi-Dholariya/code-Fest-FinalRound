#include<iostream>
#include<string>
using namespace std;
int main()
{
    int h,m;
    cin>>h>>m;
    string t;
    cin>>t;
    
    if(t == "pm")
    {
        if(h==12)
        {
            cout<<h<<":"<<m<<endl;
        }
        else
        {
            h += 12;
            cout<<h<<":"<<m<<endl;
        }
    }
    else
    {
        if(h ==12)
        {
            h = 0;
        }
        cout<<h<<":"<<m<<endl;
    }
    
    return 0;
}