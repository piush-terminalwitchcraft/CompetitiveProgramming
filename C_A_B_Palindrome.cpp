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

void solve(ll t) {
    // cout<<endl;
    ll a, b ; cin>>a>>b;
    string s; cin>>s;
    // cout<<s<<" ";
    ll n = s.size();
    ll cnt = 0;
    rep(i,0,n) if(s[i]=='0')a--; else if(s[i]=='1') b--; else cnt++;
    // cout<<s<<" "<<a<<" "<<b<<"\n";
        rep(i,0,n/2){
            if(s[i]=='?' || s[n-1-i]=='?'){
                if(s[i]+s[n-1-i]== '?'+'1' && b>0){
                    s[i] = '1';
                    s[n-1-i] = '1';
                    b--;
                    cnt--;
                }
                else if(s[i]+s[n-1-i]== '?'+'0' && a>0){
                    s[i] = '0';
                    s[n-1-i] = '0';
                    a--;
                    cnt--;
                }
                else if(s[i]+s[n-i-1]==2*'?') ;
                else{
                    cout<<"-1\n";
                    return;
                }

            }  
        }

    if(a<0 || b<0){
        cout<<"-1\n";return;
    }
    else{
        rep(i,0,n/2){
            if(s[i]=='?'){
                if(a>b && a>1){
                    s[i] = '0';
                    s[n-1-i] = '0';
                    a-=2;
                    cnt-=2;
                }
                else if(b>1){
                    s[i] = '1';
                    s[n-1-i] = '1';
                    b-=2;
                    cnt-=2;
                }
            }
        }
        if(a+b+cnt==0);
        else{
            if(cnt==1){
                if(a+b==1){
                    cnt--;
                    ll idx ; 
                    rep(i,0,n) if(s[i]=='?') idx = i;
                    if(a==1) s[idx] = '0', a--;
                    else s[idx] = '1', b--;
                }
            }
        }
    }
    if(a+b+cnt==0){
        string tmp = s;
        reverse(all(s));
        if(s==tmp) cout<<s;
        else cout<<"-1";
    }
    else cout<<"-1";

    cout<<endl;
    
}

int main() {
    IOS;
    ll t; cin>>t;
    while(t--)
    solve(t);
}