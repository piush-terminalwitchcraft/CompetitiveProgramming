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

int ct = 0;
void dfs(int node,vector<int> &vis,vector<int> adj[]){
    vis[node] = 1;
    for(int it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj);
            ct++;
        }
    }
}
void dfs(int node,vi &vis,vi adj[],vi &ans){
    vis[node] = 1;
    ans.pb(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj,ans);
        }
    }
}
void solve() {
    int n , m;cin>>n>>m;
    vi adj[n+1];
    vi vis(n+1,0);

    if(m == 0){
        for(int i=1;i<=n;i = i+3){
            cout<<i+2<<" "<<i+1<<" "<<i<<"\n";
        }
        return;
    }
    while(m--){
        int a , b; cin>>a>>b; 
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vi ans ,one ,two;
    for(int i=1;i<=n;i++){
        // cout<<"--- \n";
        if(!vis[i]){
        // cout<<"---22 \n";
            ct = 1;
            dfs(i,vis,adj);
            if(ct>3){
                // cout<<-1;
                // return;
            }
            if(ct==3){
                vi tmp(n+1,0);
                dfs(i,tmp,adj,ans);
            }
            else if(ct==2){
                vi tmp(n+1,0);
                dfs(i,tmp,adj,two);
            }
            else if(ct==1){
                one.pb(i);
            }
            
        }
    }
    if(one.size()<two.size()/2){
        cout<<-1;return;
    }
    int tmp = 0;
    for(int i=0;i<two.size();i = i+2){
        ans.pb(two[i]);
        ans.pb(two[i+1]);
        ans.pb(one[tmp]);
        tmp++;
    }
    for(;tmp<one.size();tmp++){
        ans.pb(one[tmp]);
    }
    if(ans.size()%3!=0){
        cout<<-1;
        return ;
    }
    for(int i=0;i<ans.size();i = i+3){
        cout<<ans[i+2]<<" "<<ans[i+1]<<" "<<ans[i]<<"\n";
    }
}

int main() {
    IOS;
    solve();
}