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
// 1 2 3 -> 2 3 1 -> 3 1 2
// 1 1 1
/*

1 2 3 4 5 6 7 8
5 8 1 3 2 6 4 7
0 0 0 0 0 0 0 2

1 3 2 6 4 7 5 8
0 0 0 0 0 0 6 2

5 1 3 2 6 4 7 8
0 0 0 0 0 5 6 2

4 5 1 3 2 6 7 8

8 5 7 4 6 2 3 1
1 3 2 6 4 7 5 8
*/
void shift(vll& a, vll& idx,ll k,ll n, ll i){
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.begin()+i);
    reverse(a.begin(),a.begin()+i);
    rep(i,0,n) idx[a[i]] = i;

    // _print(a);
    
}

void solve() {
    ll n; cin >> n;
    vll a(n);
    vll idx(n+1,-1);
    rep(i,0,n) cin >> a[i], idx[a[i]] = i;
    vll ans(n);
    for(int i = n; i >=1; i--){
        ll pos = idx[i];
        cout << pos << " ";
        ll crktpos = i-1-pos;
        if(crktpos>0) crktpos = crktpos -i;
        
        shift(a,idx,-crktpos,n,i-1);
        _print(crktpos);
        _print(idx);
        _print(a);
        ans[i-1] = -crktpos;
    }
    for(auto it: ans) cout << it << " ";
    cout <<endl;
}

int main() {
    IOS;
    ll t = 1;
    cin >> t;
    while(t--) 
    solve();
}