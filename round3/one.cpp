#include<iostream>
using namespace std;

void displayGrid(int a[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" | ";
        }
        cout<<endl;
    }
}

int main()
{
    int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int b[4][4] = {{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}};

    displayGrid(a);
    int choice1,choice2;

    cin>>choice1;

    displayGrid(b);

    cin>>choice2;
    int ans;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[choice1-1][i]==b[choice2-1][j]){
                ans=a[choice1-1][i];
                cout<<ans<<endl;
                exit(0);
            }
        }
    }

    return 0;
}