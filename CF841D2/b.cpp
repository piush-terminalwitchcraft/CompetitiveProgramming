#ifdef ONPC
    #define _GLIBCXX_DEBUG
#endif

/*Created this file on */
/*Author - Piush Paul */
#include <bits/stdc++.h>
using namespace std;
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
#define sz(a) ((int)((a).size()))
#define char unsigned char
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).rbegin(), (x).rend()
#define ps(x, y) fixed << setprecision(y) << x
#define setbit(x) __builtin_popcountll(x)
#define f(i, a, b) for (int i = a; i < b; ++i)
#define fr(i, a, b) for (int i = a; i >= b; --i)
#define PI 3.141592653589793
#define yes cout<<"YES\n"
#define no cout << "NO\n"
 
using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
/*
 * 1 2 3 4 5 
 * 2 4 6 8 10 
 * 3 6 9 12 15 
 * 4 8 12 16 20 
 * 5 10 15 20 25 
 *
 * */
/*
snips
beg
minimal
custHash
for
read
vect
all
readvec
sort
pb
graph
tree
rootedtree
0rootedtree
gcd
binpow
inv
fft
sufarr
aho
cht
segtree
centroid
sparse
decart
fenwick
fenwick2d
modular
table
dsu
deb
*/
;
#ifdef ONPC
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
	#define deb(x...)                 \
    		cerr << "[" << #x << "] = ["; \
    		_print(x)
	#else
	#define deb(x...)
	#endif

const int MOD = 1e9+7;
ll add(ll x, ll y) {ll res=x+y; return(res>=MOD?res-MOD:res);}
ll mul(ll x, ll y) {ll res=x*y; return(res>=MOD?res%MOD:res);} 
void precompute(){}
int solve() {
    ll n; cin >> n;
  	ll a = n, b= n+1, c = 4*n-1, d = 2022;
       if(a%2==0) a/=2; else if(b%2==0) b/=2; else if(c%2==0) c/=2;       

       if(a%3==0) a/=3; else if(b%3==0) b/=3; else if(c%3==0) c/=3;
	cout<<mul(a,mul(b,mul(c,d)))<<"\n";       
    return 0;
}
 
int32_t main() {
    IOS
	precompute();	
    int TET = 1;
    cin >> TET;
    for (int i = 1; i <= TET; i++) {
	// Google kickatart
	// cout<<"Case "<<i<<" ";
        if (solve()) {
            break;
        }
        #ifdef ONPC
            cout << "__________________________" << endl;
        #endif
    }
    #ifdef ONPC
        cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif
}
