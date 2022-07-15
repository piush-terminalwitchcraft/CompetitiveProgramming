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
#define lcm(x, y) ((x) * (y) / __gcd(x, y))
#define ps(x, y) fixed << setprecision(y) << x
#define setbit(x) __builtin_popcountll(x)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)

/* CONSTANTS */
#define PI 3.141592653589793
const ll MOD = 1e9 + 7;
const ll INF = 1000000000;
const ll MAX_N = 2e5 + 2;
bool chksort(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}
void solve() {
    int n;cin>>n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
    int a, b =-1, i;
    for(i=1;i<n;i++){
        if(arr[i-1]>arr[i] ){
            a = i-1;
            break;
        }
    }
    if(i==n){
        cout<<"yes"<<"\n"<<1<<" "<<1;
        return;
    }
    i=n-1;
    for(;i>1;i--){
        if(arr[i-2]>arr[i-1] && arr[i-1]<arr[i]){
            b = i-1;
            break;
        }
    }
    if(b==-1){
        b = n-1;
    }
    int l = a+1, m = b+1;
    // cout<<a<<" "<<b<<'\n';
    while(a<b){
        int tm= arr[a];
        arr[a] = arr[b];
        arr[b] = tm;
        a++;b--;
    }
    for(int i=0;i<n;i++){
        // cout<<arr[i]<<" ";
    }
    if(chksort(arr,n)){
        cout<<"yes"<<"\n"<<l<<" "<<m;
    }
    else{
        cout<<"no";
    }
    // cout<<n;
}

int main() {
    IOS;
    solve();
}