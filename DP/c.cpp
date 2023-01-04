#include <vector>
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
void precompute(){}
int solve() {
    int n; cin >> n; 
    vector<vi> hp(n,vi(3)), dp(n+1,vi(3));
    f(i,0,n) f(j,0,3) cin>>hp[i][j];
	f(i,1,n+1) 
	f(j,0,3) dp[i][j]=max(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3])+hp[i-1][j];
	cout << max(dp[n][0],max(dp[n][1],dp[n][2]));
    return 0;
}
 
int32_t main() {
    IOS
	precompute();	
    int TET = 1;
    //cin >> TET;
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
