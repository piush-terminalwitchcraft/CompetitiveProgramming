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
bool chk101(string s){
    if(s[0]=='1'){
        ll i = 0;
        for(;i<s.size();i++){
            if(s[i]!='1'){
                break;
            }
        }
        for(;i<s.size();i++){
            if(s[i]!='0'){
                break;
            }
        }
        for(;i<s.size();i++){
            if(s[i]!='1'){
                break;
            }
        }
        if(i!=s.size()){
            return false;
        }
        return true;
    }
    else{
        return false;
    }
}
void solve() {
    int t;cin>>t;
    string s ;
    for(int g=1;g<=t;g++){
        cin>>s;
        // bool b = true;
        ll n = s.size();
        ll i= 0;
        
            bool b = false;
            for(;i<n;i++){
                if(s[i]=='1'){
                    break;
                }
            }
            if(i==n){
                cout<<1<<"\n";
            }
            else{
                i = 0;
                for(;i<n;i++){
                    if(s[i]=='0'){
                        break;
                    }
                }
                if(i==n){
                    cout<<0<<"\n";
                }
                else{
                    char f = s[0];
                    i = 0;
                    for(;i<n;i++){
                        // cout<<i<<" "<<s[i]<<"\n";
                        if(s[i]!=f){
                            f = s[i];
                            break;
                        }
                    }
                    for(;i<n;i++){
                        if(s[i]!=f){
                            break;
                        }
                    }
                    if(i==n){
                        cout<<1<<"\n";
                    }
                    else if(chk101(s)){
                        cout<<1<<"\n";
                    }
                    else{
                        cout<<2<<"\n";
                    }
                }
            }
        
    }
       
    
}

int main() {
    IOS;
    solve();
}