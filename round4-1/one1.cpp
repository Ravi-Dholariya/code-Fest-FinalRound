#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t;
    cin >> t;
    int k=1;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x=0,y=0;
        int stroke=0;
       for (int i = 0; i < n; )
        {
            // cout<<i<<endl;
            while ((s[x]!='Y' && s[x]!='O'&& s[x]!='G' && s[x]!='A')&&(x<n))
            {
                x++;
                // cout<<"!= X : "<<x<<endl;
            }
            int flag = 0;
            while ((s[x]=='Y' || s[x]=='O'||s[x]=='G' || s[x]=='A')&&(x<n))
            {
                flag = 1;
                // cout<<"== X : "<<x<<endl;
                x++;
            }
            if(flag==1)
            {
                stroke++;
            }
            i=x;            
        }
            x=0;
        for (int i = 0; i < n; )
        {
            // cout<<i<<endl;
            while ((s[x]!='R' && s[x]!='O'&& s[x]!='P' && s[x]!='A')&&(x<n))
            {
                x++;
                // cout<<"!= X : "<<x<<endl;
            }
            int flag = 0;
            while ((s[x]=='R' || s[x]=='O'||s[x]=='P' || s[x]=='A')&&(x<n))
            {
                flag = 1;
                // cout<<"== X : "<<x<<endl;
                x++;
            }
            if(flag==1)
            {
                stroke++;
            }
            i=x;            
        }
        x=0;
        for (int i = 0; i < n; )
        {
            // cout<<i<<endl;
            while ((s[x]!='B' && s[x]!='P'&& s[x]!='G' && s[x]!='A')&&(x<n))
            {
                x++;
                // cout<<"!= X : "<<x<<endl;
            }
            int flag = 0;
            while ((s[x]=='B' || s[x]=='P'||s[x]=='G' || s[x]=='A')&&(x<n))
            {
                flag = 1;
                // cout<<"== X : "<<x<<endl;
                x++;
            }
            if(flag==1)
            {
                stroke++;
            }
            i=x;            
        }
        cout<<"case #"<<k<<": "<<stroke<<endl;
        k++;
    }
}
