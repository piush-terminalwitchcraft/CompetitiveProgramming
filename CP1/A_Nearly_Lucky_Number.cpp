#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(string s, int l){
    int count =0;
    if(l==1){
            cout<<"NO";
            return;
    }
    for(int i=0;i<l;i++){
        if(s[i]!='4'  &&  s[i]!='7'){
            cout<<"NO";
            return;
        }
    }
    // cout<<count<<endl;
    
    cout<<"YES";
    return;
}
main(){
    string s ; cin>>s;
    int l = s.size();
    solve(s,l);
}
