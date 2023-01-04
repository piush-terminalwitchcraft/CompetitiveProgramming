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
    ll n, x1 , y1 , x2, y2 , i;
    cin>>n>>x1>>y1>>x2>>y2;
    string s; cin>>s;
    for(i=0;i<n;i++){
        int a = x1 , b= y1;
        if(s[i]=='N'){
            b++;
            if(abs(b-y2)>abs(y1-y2)){
                b--;
            }
        // cout<<a<<" "<<b<<"N\n";
        }
        else if(s[i]=='S'){
            b--;
            if(abs(b-y2)>abs(y1-y2)){
                b++;
            }
        // cout<<a<<" "<<b<<"S\n";
        }
        else if(s[i]=='W'){
            a--;
            if(abs(a-x2)>abs(x1-x2)){
                a++;
            }
        // cout<<a<<" "<<b<<"W\n";
        }
        else if(s[i]=='E'){
            a++;
            if(abs(a-x2)>abs(x1-x2)){
                a--;
            }
        // cout<<a<<" "<<b<<"E\n";
        }
        // cout<<a<<" "<<b<<'\n';
        x1 = a; y1 = b;
        if(x1==x2 && y1==y2){
            cout<<i+1;
            return;
        }
    }
    cout<<-1;
    
}

int main() {
    IOS;
    solve();
}