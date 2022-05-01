#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int minPressure = 0;

    while (t--)
    {
        int numberOfCustomer, numberOfProduct;
        cin >> numberOfCustomer >> numberOfProduct;

        int customer[numberOfCustomer][numberOfProduct];

        for (int i = 0; i < numberOfCustomer; i++)
        {
            for (int j = 0; j < numberOfProduct; j++)
            {
                cin >> customer[i][j];
            }
            sort(customer[i], customer[i] + numberOfCustomer);
        }

        // for (int i = 0; i < numberOfCustomer; i++)
        // {
        //     for (int j = 1; j < numberOfProduct; j++)
        //     {
        //         int left = customer[i][j] - customer[i+1][0];
        //         cout<<left<<endl;
        //     }
        // }


        int num = numberOfProduct - 1;
        int n = numberOfProduct - 1;
        int i =0 ;
        while (i<n)
        {
            int l1 = customer[i][0] - customer[i+1][0];
            int r1 = customer[i][n] - customer[i+1][n];
            int l2 = customer[i][0] - customer[i+1][n];
            int r2 = customer[i][n] - customer[i+1][0];

            if(l1<0) l1 = 0 - l1;
            if(r1<0) r1 = 0 - r1;
            if(l2<0) l2 = 0 - l2;
            if(r2<0) r2 = 0 - r2;

            

            cout<<l1<<" "<<l2<<endl;
            cout<<r1<<" "<<r2<<endl;
            i++;
        }
        

        //

    }

    return 0;
}