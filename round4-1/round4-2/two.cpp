#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input-b2.txt","r",stdin);
        freopen("output-b2.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    int k =1;
    while(t--){
        string s,f;
        cin>>s>>f;

        int i=0;
        int move[s.size()]={0};
        int totalmove=0;
        

        while(s[i]!='\0'){
            int j=0;
            int flag=1;
            while(f[j]!='\0'){
                if(s[i]==f[j]){
                    move[i]=0;
                    flag=0;
                }
                else if(s[i]<f[j]){
                    if(flag==1){
                        int d = f[j]-s[i];
                        if (d>13)
                        {
                            d=26-d;
                        }
                        move[i]=d;
                        flag=0;
                    }
                    else{
                        int d = f[j]-s[i];
                        if (d>13)
                        {
                            d=26-d;
                        } 
                        move[i]=min(move[i],d);
                        // cout<<move[i]<<"==1"<<endl;
                    }
                }
                else{
                    
                    if(flag==1){
                        int d = s[i]-f[j];
                        if (d>13)
                        {
                            d=26-d;
                        }
                        move[i]=d;
                        flag=0;
                    }
                    else{
                        
                        int d = s[i]-f[j];
                        if (d>=13)
                        {
                            d=26-d;
                        } 
                        move[i]=min(move[i],d);
                    }
                }
                j++;
            }
            totalmove+=move[i];
            i++;
        }
          cout<<"case #"<<k<<": "<<totalmove<<endl;
        k++;

    }

    return 0;
}