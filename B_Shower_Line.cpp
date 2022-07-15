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

// int permutation(int arr, int start, int end,int ans){
//     if(start==end)
//     {
//         printarray(arr, end+1);
//         return;
//     }
//     int i;
//     for(i=start;i<=end;i++)
//     {
//         //swapping numbers
//         swap((arr+i), (arr+start));
//         //fixing one first digit
//         //and calling permutation on
//         //the rest of the digits
//         permutation(arr, start+1, end);
//         swap((arr+i), (arr+start));
//     }
// }
void solve() {
    int arr[5][5];
    rep(i,0,5){
        rep(j,0,5){
            cin>>arr[i][j];
        }
    }
    ll ans = 0;
    vector<int> a;
    a.pb(0);
    a.pb(1);
    a.pb(2);
    a.pb(3);
    a.pb(4);
    do{
        ll f=0;
        for(int i=0;i<5;i++){
            for(int j=i;j<4;j=j+2){
                f+=arr[a[j+1]][a[j]];
                f+=arr[a[j]][a[j+1]];
            }
        }
        // ll f = arr[a[0]][a[1]] + arr[a[1]][a[2]] + arr[a[2]][a[3]] + arr[a[3]][a[4]];
        // f += arr[a[1]][a[0]] + arr[a[2]][a[1]] + arr[a[3]][a[2]] + arr[a[4]][a[3]];
        // cout<<endl;
        ans = max(ans,f);
    }while(next_permutation(a.begin(), a.end()));
    cout<<ans;
}

int main() {
    IOS;
    solve();
}