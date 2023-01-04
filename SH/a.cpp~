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
 
using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

void precompute(){}
int solve() {
    ll n, d; cin >> n >> d; 
    vll a(n); f(i,0,n) cin >> a[i];
   
    ll initsm = accumulate(all(a),0ll);
    if(initsm == 0) {
	    cout<<0<<"\n"; return 0;
    } 
    // Check how much time untill all get non zero 
    if(n<=2) {
	    if(n==1) cout << 0 << "\n"; 
	    else {
		    ll ans = 0; 
		    if(a[0]>a[1]) swap(a[0],a[1]);
		    if(a[0]+a[1] == 0); 
		    else if(a[0]==0) ans = min(d-1,0ll)*2+d*2;
		    else ans = 4*d;
		   cout << ans << "\n"; 
	    }
	    return 0;
    }
    ll len = 0, md = 0; 
    vll zro(n); f(i,0,n) zro[i] = (a[i]==0?0:-1); 
    f(i,1,n) {
	    if(zro[i]==0){
		    if(zro[i-1]==-1)zro[i]=1;
		    else zro[i]=zro[i-1]+1;
	    }
    }
    deb(zro);
    fr(i,n-2,0){
	    if(zro[i+1] == -1){
		    ll len = 1; 
		    while(i>=0 and zro[i] != -1){
			    zro[i]=min(zro[i],len++);
		    		i--;
		    }

	    }
    }
    deb(zro);
    ll fnsm = 0; 
    f(i,0,n){
	    if(i==0){
		    if(a[i]==0){
			if(a[i+1]==0) fnsm += min(d-zro[i+1]-1 ,0ll)*2;
			else fnsm += d*2; 	
		    }
		    else{
			fnsm += d*2; 
			if(a[i+1]==0) fnsm -=2;
		    }
	    }
	    else if(i == n-1){
		    if(a[i]==0){
			if(a[i-1]==0) fnsm += min(d-zro[i-1]-1,0ll)*2;
			else fnsm += d*2;
		    }
		    else{
			fnsm += d*2; 
			if(a[i-1]==0) fnsm -=2;

		    }
	    }
	    else {
		    if(a[i]!=0){
		    	fnsm += d*4;
			if(a[i-1]==0) fnsm -=2;
			if(a[i+1]==0) fnsm -=2;
		    }
		    else{
			/*
			 * N 0 N 
			 * N 0 0 
			 * 0 0 N 
			 * 0 0 0  
			 * */
			if(a[i+1]==0) fnsm+=2*min(d-zro[i+1]-1,0ll );
			else fnsm += 2*d;
			if(a[i-1]==0) fnsm+=2*min(d-zro[i-1]-1,0ll );
			else fnsm += 2*d;  
		    }
			
	    }

    }
	
	cout << fnsm << "\n";
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
