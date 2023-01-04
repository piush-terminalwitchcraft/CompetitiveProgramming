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

void precompute(){}
int solve() {
	int n, m; cin >> n >> m;
    	char ch[n][m]; int dp[n+1][m+1];
	memset(dp,0,sizeof(dp));
	f(i,0,n) f(j,0,m) cin >> ch[i][j];
	f(i,1,n+1){
		f(j,1,n+1){
			if(i==1 and j == 1) dp[i][j]=1;
			else if(i==1) dp[i][j]=dp[i][j-1];
			else if(j==1) dp[i][j]=dp[i-1][j];
			else dp[i][j] = (dp[i-1][j]+dp[i][j-1])%(int)(1e9+7);
		}
	}
	cout<<dp[n][m]<<"\n";
		
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
