#include <bits/stdc++.h>
using namespace std;
/* DEBUGGING */
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
template <typename T, typename V>
void __print(const pair<T, V> &x) {
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x) {
    int f = 0;
    cerr << '{';
    for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define deb(x...)                 \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define deb(x...)
#endif
/* MACROS */
typedef long long int ll;
 
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
 
typedef map<int, int> mii;
typedef tuple<int, int, int> tup;
 
#define ff first
#define ss second
#define pb push_back
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
// eg - unordered_map<long long, int, custom_hash> safe_map; // for safe hash
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
#define ps(x, y) fixed << setprecision(y) << x
#define setbit(x) __builtin_popcountll(x)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
 
/* CONSTANTS */
#define PI 3.141592653589793
#define yes cout<<"Eligible\n"
#define no cout << "Ineligible\n"
const ll MOD = 1e9 + 7;
const ll INF = 1000000000;
const ll MAX_N = 2e5 + 2;
ll add(ll x, ll y) {ll res=x+y; return(res>=MOD?res-MOD:res);}
ll mul(ll x, ll y) {ll res=x*y; return(res>=MOD?res%MOD:res);}
ll sub(ll x, ll y) {ll res=x-y; return(res<0?res+MOD:res);}
ll power(ll a,ll b,ll m=MOD){ ll ans=1; a=a%m;  while(b>0) {  if(b&1)  ans=(1ll*a*ans)%m; b>>=1;a=(1ll*a*a)%m;}return ans;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
ll lcm( ll x, ll y) { return (x*y)/gcd(x,y);}
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}
/**
 * Q1 TC
 * 2                           
 * 832483274807     
 * 100000000000    
 * PASS
 * SELL
 * BUY
 * 0 1 2 3 4 5 6 7 8 9
 * 1 2 3 4 6 12 
 * 1 13 
 * 1 2 7 14 
 */

typedef pair<ll,string> P;

void precompute(){}
void solve() {
    // Q1 
    // ll n; cin >> n;
    // if(n==0 ) {
    //     cout<<"PASS\n"; return;
    // }
    // if( n%2==0 and (n/2)%2==1 ) cout << "PASS\n";
    // else{
    //     if(n%2) cout << "SELL\n"; else cout<<"BUY\n";
    // }
    // Q2
    // string s; cin >> s; bool flg =0;
    // map<char,int> mp; for(char it: s) mp[it]++;
    // ll ans = 0; for(auto it: mp) if(it.ss%2==0) ans+=it.ss; else ans+=it.ss-1,flg=1; cout<<ans+flg<<"\n";
    //Q3 
    // ll n, m; cin >> n >> m; 
    // vll a(n); rep(i,0,n) cin >> a[i];
    // rep(i,1,n){
    //     if(a[i-1]>a[i]){
    //         ll tmp = a[i-1];
    //         int j = i; ll mx = 0; while(j<n and a[j]<tmp) mx=max(mx,a[j]),j++,a[j-1]=a[j];
    //         a[j-1]=tmp;
    //         if(mx+tmp>m) {cout<<0;return;}

    //     }
    // }  
    // cout<<1;
    // Q4
    ll n; cin >> n; 
    unordered_map<ll,string> mp; 
    map<ll,ll> tm;
    map<string,ll> active;
    map<ll,vll> st,ed;
    rep(i,0,n){
        string s; cin>>s;mp[i]=s;
    }
    rep(i,0,n){
        ll x, y; cin>>x>>y;tm[x]=1,tm[y]=1,st[x].pb(i),ed[y].pb(i);
    }
    ll flg = 0, prv ;
    vll ans1, ans2, ans3;
    vector<vector<string>> ans4;
    vector<string> tmp;
    for(auto it: tm){
        if(!flg){
            flg=1; prv = it.ff;
            for(auto it2: st[it.ff]){
                active[mp[it2]]=1;
            }
        }
        else{
            tmp.clear();
            ans1.pb(prv),ans2.pb(it.ff),ans3.pb(sz(active));
            for(auto it2:active)tmp.pb(it2.ff); ans4.pb(tmp);
            for(auto it2: st[it.ff]){
                active[mp[it2]]=1;
            }
            for(auto it2: ed[it.ff]){
                active.erase(mp[it2]);
            }
            prv = it.ff;
        }
    }
    cout<<sz(ans1)<<"\n";
    rep(i,0,sz(ans1)){
        cout<<ans1[i]<<" "<<ans2[i]<<" "<<ans3[i];for(auto it2: ans4[i])cout<<" "<<it2;cout<<"\n";
    }
// cout<<"5\n";
// cout<<"10 11 2 Alice Cacey\n";
// cout<<"11 12 3 Alice Bob Cacey\n";
// cout<<"12 14 3 Alice Cacey Deepak\n";
// cout<<"14 15 3 Cacey Deepak Emma\n";
// cout<<"15 16 2 Deepak Emma\n";
    // Q5
    // ll sm, n ; cin >> sm >> n; 
    // vll a(n); rep(i,0,n) cin>>a[i];
    // ll idx = 0, tmpsum = 0,ans = 0;    
    // rep(i,0,n){
    //     tmpsum+=a[i];
    //     while(idx<=i and tmpsum>sm) tmpsum-=a[idx++];
    //     ans += i-idx+1;
    //     // deb(ans);
    // }
    // cout<<ans;
    // Q6
    // ll n; cin >> n;
    // vll a(n); rep(i,0,n) cin>>a[i];
    // rep(i,0,n)a[i]--;
    // vll vis(n,0);
    // rep(i,0,n){
    //     if(!vis[i]){
    //         ll k = a[i], len = 1;
    //         while(k!=i) len++,k=a[k];
    //         vis[i]=len, k = a[i]; 
    //         while(k!=i) vis[k]=len,k=a[k];
    //     }
    // }
    // rep(i,0,n)cout<<vis[i]<<" ";
    // Q7
    // ll v, e; cin >> v >> e;
    // vector<vll> adj(v);
    // vll vis(v,0);
    // function<bool(int, int)> dfs = [&](ll i, ll src) -> bool {
    //     bool ans = 0;vis[i]=1;
    //     if(i==src) return 1;
    //     for (ll it : adj[i]) if(!vis[it]) ans |= dfs(it,src);
    //     return ans;
    // };
    // rep(i,0,e){
    //     ll x, y; cin >> x >> y; 
    //     if(x!=y)adj[x].pb(y);
    // }
    // rep(i,0,v) if(!vis[i])for(auto it: adj[i]) if(dfs(it,i)) {no;return;}
    // yes;
    // Q8
    // ll n, m; cin >> n >> m; vll a(m); rep(i,0,m)cin>>a[i];
    // ll dp[n+1][m+1]; rep(i,0,n+1)dp[i][0]=0; rep(j,0,m+1)dp[0][j]=0;
    // for (int i = 1; i <= n; i++){
    //     ll pdiff = INT_MIN;
    //     for (int j = 1; j < m; j++){
    //         pdiff=max(pdiff,dp[i-1][j-1]-a[j-1]); dp[i][j]=max(dp[i][j-1],a[j]+pdiff);
    //         // for (int k = 0; k < j; k++) mx=max(mx,a[j]-a[k]+dp[i-1][k]);
    //         // dp[i][j]=max(mx,dp[i][j-1]);
    //     }
    // }
    // cout<<dp[n][m-1];
    // Q9
    // ll n; cin >> n;
    // ll mat[n][n]; 
    // rep(i,0,n){
    //     rep(j,0,n){
    //         char tmp;cin>>tmp; mat[i][j]=(tmp=='$');
    //     }
    // }

}
 
int main() {
    IOS;
    precompute();
    ll t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        //cout << "Case #<< i << " ";
        solve();
    }
}