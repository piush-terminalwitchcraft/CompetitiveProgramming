#include <bits/stdc++.h>
using namespace std;

/* MACROS */
typedef long long int ll;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve() {

    ll n, k; cin>>n>>k;
    string s;  cin>>s;
    char ans[n]; 
    rep(i,k,n) ans[i] = s[i];
    ll i = 0, j = k-1;
    ll t = k-1;
    ll flg = 0;
    while(i<=j){
        if(flg==0) ans[t--] = s[i++] ;
        else ans[t--] = s[j--] ;
        flg = 1 - flg;
    }
    rep(i,0,n) cout<<ans[i];
    cout<<"\n";
    
}

int main() {
    IOS;
    ll t; 
    cin>>t;
    while(t--)
    solve();
}