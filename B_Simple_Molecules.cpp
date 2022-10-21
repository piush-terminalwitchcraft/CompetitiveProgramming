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
#define yes cout<<"YES\n"
#define no cout << "NO\n"
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

void precompute(){}
void solve() {
    vpll a(3); rep(i,0,3)a[i].ss=i+1,cin>>a[i].ff;sort(all(a));
    if(a[0].ff==0 or a[0].ff+a[1].ff<a[2].ff or (a[0].ff+a[1].ff-a[2].ff)%2 ) {cout<<"Impossible";return;}
    ll k = a[0].ff+a[1].ff-a[2].ff; k/=2;a[0].ff-=k,a[1].ff-=k;
    ll _12 =0, _23=0, _13=0;
    if(a[0].ss==1 and a[2].ss==3 ) _13=a[0].ff; 
    if(a[0].ss==3 and a[2].ss==1 ) _13=a[0].ff; 
    if(a[0].ss==1 and a[2].ss==2 ) _12=a[0].ff; 
    if(a[0].ss==2 and a[2].ss==1 ) _12=a[0].ff; 
    if(a[0].ss==2 and a[2].ss==3 ) _23=a[0].ff; 
    if(a[0].ss==3 and a[2].ss==2 ) _23=a[0].ff; 

    if(a[1].ss==1 and a[2].ss==3 ) _13=a[1].ff; 
    if(a[1].ss==3 and a[2].ss==1 ) _13=a[1].ff; 
    if(a[1].ss==1 and a[2].ss==2 ) _12=a[1].ff; 
    if(a[1].ss==2 and a[2].ss==1 ) _12=a[1].ff; 
    if(a[1].ss==2 and a[2].ss==3 ) _23=a[1].ff; 
    if(a[1].ss==3 and a[2].ss==2 ) _23=a[1].ff; 
    if(_12==0) _12=k;
    if(_23==0) _23=k;
    if(_13==0) _13=k;
    cout<<_12<<" "<<_23<<" "<<_13;
    // cout<<k<<" "<<a[0]<<" "<<a[1];
    // 1-2,2-3,1-3

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