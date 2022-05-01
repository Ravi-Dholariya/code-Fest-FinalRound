#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    int i;
    for(i=0;s[i]!='\0';i++);

    //cout<<s<<endl;

    int n=i;
    int flag=1;
    //cout<<n<<endl;
    for(int i=0;i<=n/2;i++){
        if(s[i]!=s[n-1-i]){
            cout<<"Not Palindrome"<<endl;
      //      cout<<s[i]<<" "<<s[n-1-i]<<endl;
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Palinrome"<<endl;
    }
    return 0;
}