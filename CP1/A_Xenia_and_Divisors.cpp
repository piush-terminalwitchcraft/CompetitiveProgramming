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

void solve() {
    int n;cin>>n;
    map<int,int>mp;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp[5]>0 || mp[7]>0){
        cout<<-1;
        return;
    }
    int k1=0,k2=0,k3=0,k4=0;
    if(mp[1]>0 && mp[2]>0 && mp[4]>0){
        int key = min(mp[1],min(mp[2],mp[4]));
        mp[1]-=key;
        mp[2]-=key;
        mp[4]-=key;
        k1  = key;
    }
    if(mp[1]>0 && mp[2]>0 && mp[6]>0){
        int key = min(mp[1],min(mp[2],mp[6]));
        mp[1]-=key;
        mp[2]-=key;
        mp[6]-=key;
        k2  = key;
    }
    if(mp[1]>0 && mp[3]>0 && mp[6]>0){
        int key = min(mp[1],min(mp[3],mp[6]));
        mp[1]-=key;
        mp[3]-=key;
        mp[6]-=key;
        k3  = key;  
    }

    if(mp[2]>0 && mp[4]>0 && mp[6]>0){
        int key = min(mp[1],min(mp[2],mp[4]));
        mp[2]-=key;
        mp[4]-=key;
        mp[6]-=key;
        k4  = key;    
    }
    if(mp[1]!=0 || mp[2]!=0 || mp[4]!=0 || mp[3]!=0 || mp[6]!=0){
        cout<<-1;
        return;
    }
    else{
        while(k1--){
            cout<<1<<" "<<2<<" "<<4<<"\n";
        }
        while(k2--){
            cout<<1<<" "<<2<<" "<<6<<"\n";
        }
        while(k3--){
            cout<<1<<" "<<3<<" "<<6<<"\n";
        }
        while(k4--){
            cout<<2<<" "<<4<<" "<<6<<"\n";
        }
    }
    
}
int main() {
    IOS;
    solve();
}