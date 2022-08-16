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
// #define PI 3.141592653589793
// #define yes cout<<"YES\n"
// #define no cout << "NO\n"
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


class SegTree{
    vector<int> seg;
    int size;
    int elem_neutro = 0;
    int level_ini=0;
    int merge(int a, int b, int d){
        if(d%2) return a|b;
        else return a^b;
    }
    void update(int idx, int val, int stl, int str, int no, int lv){
        if(stl == idx and str==idx){
            seg[no] = val;
            return;
        }
        if(stl>idx or str<idx) return;
 
        int mid = (stl+str)/2;
        update(idx, val, stl, mid, 2*no, lv-1);
        update(idx, val, mid+1, str, 2*no+1, lv-1);
 
        seg[no] = merge(seg[2*no], seg[2*no+1], lv);
    }
 
    int query(int l, int r, int stl, int str, int no, int lv){
        if(str<l or stl>r) return elem_neutro;
        if(stl>=l and str<=r) return seg[no];
 
        int mid = (stl+str)/2;
        int x = query(l, r, stl, mid, 2*no, lv-1);
        int y = query(l, r, mid+1, str, 2*no+1, lv-1);
        return merge(x, y, lv);
    }
    public:
        SegTree(int n, int level): seg(4*n, 0){size=n;level_ini = level;}
        int query(int l, int r){return query(l, r, 0, size-1, 1, level_ini);}
        void update(int idx, int val){update(idx, val, 0, size-1, 1, level_ini);}
        void out(){for(int i=0; i<size; i++){cout<<query(i, i)<<" ";cout<<endl;}}
};

/*
1 2 3 4 5 6 7 8
1 or 2  3 or 4  5 or 6 7 or 8
((1 or 2)^(3 or 4)) or ((5 or 6)^(7 or 8))

3 xor (3 or 4)
3 xor 
*/
void precompute(){}
void solve() {
    int n, m;
    cin>>n>>m;
 
    int elem = 1<<n;
    SegTree seg(elem, n);
    for(int i=0; i<elem; i++){
        int x;
        cin>>x;
        seg.update(i, x);
    }
    int op = 0;
    for(int i=0; i<m; i++){
        int idx, b;
        cin>>idx>>b;
        seg.update(idx-1, b);
        cout<<seg.query(0, elem-1)<<endl;
    }
   
    
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