#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    int t,a,b,c;
    int ans = 0;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ans++;
        }
    }
    cout<<ans;
}
