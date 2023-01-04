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

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int i=0, k;
    for(;i<n;i++){
        if(s[i]!='.'){
            k = i;
            break;
        }
    }
    if(i==s.size()){
        cout<<s.size();
        return;
    }
    else{
        int ans = 0;
        if(s[k]=='L'){
            vector<int> idx;
            bool b = true;
            for(i=k;i<n;i++){
                if(s[i]!='.')idx.pb(i);
            }
            cout<<endl;
            for(i=1;i<idx.size();i+=2){
                ans+=idx[i]-idx[i-1]-1;
                // cout<<idx[i]<<" "<<idx[i-1]<<" "<<ans<<" 8\n";
            }
            for(i=2;i<idx.size();i+=2){
                int k = (idx[i]+idx[i-1])%2;
                if(k==0)ans++;
                // cout<<idx[i]<<" "<<idx[i-1]<<" "<<ans<<" 5\n";
            }
            if(idx.size()%2==1){
                if(n-idx[idx.size()-1]>=0){
                    ans+=(n-idx[idx.size()-1]-1);
                }
            }
            cout<<ans;
        }
        else if(s[k]=='R'){
            // cout<<k<<"vdfbv";
            ans+=k;
            vector<int> idx;
            bool b = true;
            for(i=k;i<n;i++){
                if(s[i]!='.')idx.pb(i);
            }
            // for(auto j:idx){
            //     cout<<j<<" ";
            // }
            // cout<<ans<<endl;
            for(i=1;i<idx.size();i+=2){
                // cout<<idx[i]<<" "<<idx[i-1]<<" "<<ans<<" `\n";
                int k = (idx[i]+idx[i-1])%2;
                if(k==0)ans++;
                // cout<<idx[i]<<" "<<idx[i-1]<<" "<<ans<<" `\n";
            }
            for(i=2;i<idx.size();i+=2){
                ans+=idx[i]-idx[i-1]-1;
                // cout<<idx[i]<<" "<<idx[i-1]<<" "<<ans<<" ``\n";
            }
            if(idx.size()%2==0){
                if(n-idx[idx.size()-1]>=0){
                    ans+=(n-idx[idx.size()-1]-1);
                }
            }
            cout<<ans;

        }
    }
    
}

int main() {
    IOS;
    solve();
}