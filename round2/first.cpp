#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    for (int i = 1; i <= n; i++)
    {
        int ans = 1;
        if(i%3==0 || i%5==0 )
        {
            int j = n;
            while (j>=1)
            {
                ans *= j;
                j--;
            }
        }
        x=ans;
        if(ans%3==0 || ans%5==0)
        
        {
         cout<<ans<<endl;   
        }
    }
    return 0;
}