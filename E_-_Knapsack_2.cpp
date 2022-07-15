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
const ll inf = 1000000000;
const ll MAX_N = 2e5 + 2;
ll add(ll x, ll y) {ll res=x+y; return(res>=MOD?res-MOD:res);}
ll mul(ll x, ll y) {ll res=x*y; return(res>=MOD?res%MOD:res);}
ll sub(ll x, ll y) {ll res=x-y; return(res<0?res+MOD:res);}
ll power(ll a,ll b,ll m=MOD){ ll ans=1; a=a%m;  while(b>0) {  if(b&1)  ans=(1ll*a*ans)%m; b>>=1;a=(1ll*a*a)%m;}return ans;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
ll lcm( ll x, ll y) { return (x*y)/gcd(x,y);}
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}

void solve() {
    // ll n, w; cin >>n >> w;
    // ll sum = 0;
    // vpll itm(n);
    // rep(i,0,n) cin >> itm[i].ff >> itm[i].ss, sum+= itm[i].ss;
    // sort(all(itm),[](pll a, pll b){
    //     return a.ss < b.ss;
    // });
    
    // ll dp[sum+1][n+1];
    // rep(i,0,sum+1) rep(j,0,n+1) dp[i][j] =INF;
    // rep(i,0,n+1) dp[0][i] = 0;

    // for(int i = 1; i <= sum; i++){    
    //     for(int j = 1; j <= n; j++){
    //         if(i<=itm[j-1].ss){
    //             dp[i][j] = min(dp[i-itm[j-1].ss][j-1] + itm[j-1].ff, dp[i][j-1]);
    //         }
    //         else dp[i][j] = dp[i][j-1];
    //     }
    // }


    // ll ans = -1;
    // for(ll i = 1;i <= sum; i++) for(ll j = 1;j <= n; j++) 
    // if(dp[i][j] <= w) ans = max(ans,i);

    // cout << ans << "\n";

     int N,W;
    int w[105];
    int v[105];
    cin>>N>>W;

    int sum = 0;
    for(int i=1; i<=N; i++)
    {
        cin>>w[i];
        cin>>v[i];
        sum += v[i];
    }
 
    int dp[sum+1][N+1];

    for(int i=0; i<=sum; i++)
        for(int j=0; j<=N; j++)
            dp[i][j] = inf;

    for(int i=0; i<=N; i++)
        dp[0][i] = 0;
 
    for(int i=1; i<=sum; i++)
    {
        for(int j=1; j<=N; j++)
        {
            if(i-v[j]>=0)
                dp[i][j] = min(dp[i-v[j]][j-1] + w[j], dp[i][j-1]);
            else
                dp[i][j] = dp[i][j-1];
        }
    }

    int ans = 0;
 
    for(int i=0; i<=sum; i++)
    {
        for(int j=0; j<=N; j++)
        {
            if(dp[i][j] <= W)
                ans = max(ans,i);
        }
    }

    cout<<ans<<endl;
    
    
}

int main() {
    IOS;
    ll t = 1;
    //cin >> t;
    while(t--) 
    solve();
}