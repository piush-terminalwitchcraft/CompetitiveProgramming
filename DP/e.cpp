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
    ll n, w, sm = 0; cin >> n >> w; 
    vector<vll> itm(n,vll(2)); f(i,0,n) cin>>itm[i][0]>>itm[i][1];
    f(i,0,n) sm += itm[i][1];
    
    ll dp[n+1][sm+1];
    f(i,0,n+1){
	    f(j,0,sm+1) dp[i][j]=w+1;
    }
    
    f(i,0,n+1) dp[i][0]=0;
//	cout << n << " " << w << "\n";
    f(i,0,n+1){
	    f(j,0,sm+1){
		    if(i==0 or j==0); else
		    if(itm[i-1][1]<=j){
			    dp[i][j]=min(dp[i-1][j],dp[i-1][j-itm[i-1][1]]+itm[i-1][0]);
		    }
		    else dp[i][j]=dp[i-1][j];
	    	//cout<<dp[i][j]<< " ";
	    }// cout << "\n";

    }
    ll ans = 0; f(i,0,n+1) f(j,0,sm+1) if(dp[i][j]<=w) ans=max(ans,j+0ll);
    cout<<ans<<"\n";
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
