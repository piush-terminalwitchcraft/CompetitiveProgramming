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
 * jklmn 
 * 1 2 3 4 5
 * nmjkl 
 * 5 4 1 2 3 X X X X X X X  
 * jkl 
 * lkjmn
 * nmjkl 
 *
 * abc
 * 1 2 3 
 * cba 
 * 3 2 1 
 *  efgh 
 *  1 2 3 4 
 *  gfeh 
 *  3 2 1 4
 *
 *
 *  1 
 *  1 2 
 *  3 2 1 
 *  3 2 1 4 
 *  5 4 1 2 3 
 *  5 4 1 2 3 6
 * */
void precompute(){}
int solve() {
    int n ; cin >> n; 
    string s; cin >> s; 
	deque<char> q; ll flg = 0;
	f(i,0,n){
		if(flg) 
		q.push_front(s[i]);
		else q.push_back(s[i]);
		
		if(i%2 == 0) flg ^=1;
	}
	if(!flg)
	while (!q.empty()) {
	
		cout<<q.front();q.pop_front();
	}
	else {
		while(!q.empty()){cout<<q.back();q.pop_back();}
	}
	cout<<"\n";
	//cout<<flg<<"\n";
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
