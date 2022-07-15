#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    int t; cin>>t;
    while(t--){
        int n ; cin>>n;
        string s; cin>>s;
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i]=='U'){
                ans+='D';
            }
            if(s[i]=='D'){
                ans+='U';
            }
            if(s[i]=='L'){
                ans+='L';
            }
            if(s[i]=='R'){
                ans+='R';
            }
        }
        cout<<ans<<"\n";
    }
}
