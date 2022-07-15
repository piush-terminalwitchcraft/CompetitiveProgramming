// // #include <bits/stdc++.h>
// // using namespace std;
// // /* DEBUGGING */
// // void __print(int x) { cerr << x; }
// // void __print(long x) { cerr << x; }
// // void __print(long long x) { cerr << x; }
// // void __print(unsigned x) { cerr << x; }
// // void __print(unsigned long x) { cerr << x; }
// // void __print(unsigned long long x) { cerr << x; }
// // void __print(float x) { cerr << x; }
// // void __print(double x) { cerr << x; }
// // void __print(long double x) { cerr << x; }
// // void __print(char x) { cerr << '\'' << x << '\''; }
// // void __print(const char *x) { cerr << '\"' << x << '\"'; }
// // void __print(const string &x) { cerr << '\"' << x << '\"'; }
// // void __print(bool x) { cerr << (x ? "true" : "false"); }
// // template <typename T, typename V>
// // void __print(const pair<T, V> &x) {
// //     cerr << '{';
// //     __print(x.first);
// //     cerr << ',';
// //     __print(x.second);
// //     cerr << '}';
// // }
// // template <typename T>
// // void __print(const T &x) {
// //     int f = 0;
// //     cerr << '{';
// //     for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);
// //     cerr << "}";
// // }
// // void _print() { cerr << "]\n"; }
// // template <typename T, typename... V>
// // void _print(T t, V... v) {
// //     __print(t);
// //     if (sizeof...(v)) cerr << ", ";
// //     _print(v...);
// // }
// // #ifndef ONLINE_JUDGE
// // #define deb(x...)                 \
// //     cerr << "[" << #x << "] = ["; \
// //     _print(x)
// // #else
// // #define deb(x...)
// // #endif
// // /* MACROS */
// // typedef long long int ll;

// // typedef pair<int, int> pii;
// // typedef pair<ll, ll> pll;

// // typedef vector<int> vi;
// // typedef vector<ll> vll;
// // typedef vector<pii> vpii;
// // typedef vector<pll> vpll;

// // typedef map<int, int> mii;
// // typedef tuple<int, int, int> tup;

// // #define ff first
// // #define ss second
// // #define pb push_back
// // #define IOS                           \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);                    \
// //     cout.tie(NULL);
// // #define lb lower_bound
// // #define ub upper_bound
// // #define all(x) (x).begin(), (x).end()
// // #define sz(x) (x).size()
// // #define ps(x, y) fixed << setprecision(y) << x
// // #define setbit(x) __builtin_popcountll(x)
// // #define rep(i, a, b) for (int i = a; i < b; ++i)
// // #define repr(i, a, b) for (int i = a; i >= b; --i)

// // /* CONSTANTS */
// // #define PI 3.141592653589793
// // const ll MOD = 1e9 + 7;
// // const ll INF = 1000000000;
// // const ll MAX_N = 2e5 + 2;
// // ll add(ll x, ll y) {ll res=x+y; return(res>=MOD?res-MOD:res);}
// // ll mul(ll x, ll y) {ll res=x*y; return(res>=MOD?res%MOD:res);}
// // ll sub(ll x, ll y) {ll res=x-y; return(res<0?res+MOD:res);}
// // ll power(ll a,ll b,ll m=MOD){ ll ans=1; a=a%m;  while(b>0) {  if(b&1)  ans=(1ll*a*ans)%m; b>>=1;a=(1ll*a*a)%m;}return ans;}
// // ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// // ll lcm( ll x, ll y) { return (x*y)/gcd(x,y);}
// // bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}
// // /*
// // 123 2
// // 1232
// // 1223

// // */
// // string yes = "POSSIBLE";
// // string no = "IMPOSSIBLE";

// // void printAns(int f, int s){
// //     cout << "Case #"<<f << ": " << s << "\n";
// // }

// // void solve(int f) {
// //     int a, b; cin >> a >> b ;
// //     int ans = 0;
// //     int prdt = 1, sum = 0;
// //     string tmp = to_string(a);
// //     for(auto it: tmp) sum += it - '0', prdt *= (it- '0');
// //     if(prdt%sum==0) ans++;
// //     for(int i  = a+1; i <= b; i++){
// //         int lst = a%10;
// //         if(lst!= 9){
// //             if(lst==0){
// //                 a++;
// //                 sum++;
// //                 string tmp = to_string(a);
// //                 for(auto it: tmp)  prdt *= (it- '0');
// //             }
// //             else{
// //                 sum ++;
// //                 prdt/=lst;
// //                 prdt*=lst;
// //                 a++;
// //             }

// //             if(prdt%sum==0)ans++;
// //         }
// //         else{
// //             a++;
// //             sum = 0 , prdt = 1;
// //             for(auto it: tmp) sum += it - '0', prdt *= (it- '0');
// //             if(prdt%sum==0)ans++;
// //         }
// //     }
// //     printAns(f,ans);
    
// // }

// // int main() {
// //     IOS;
// //     ll t = 1;
// //     cin >> t;
// //     for(int i = 1; i <= t; i++) solve(i);
// // }



// #include <bits/stdc++.h>
// using namespace std;
// /* DEBUGGING */
// void __print(int x) { cerr << x; }
// void __print(long x) { cerr << x; }
// void __print(long long x) { cerr << x; }
// void __print(unsigned x) { cerr << x; }
// void __print(unsigned long x) { cerr << x; }
// void __print(unsigned long long x) { cerr << x; }
// void __print(float x) { cerr << x; }
// void __print(double x) { cerr << x; }
// void __print(long double x) { cerr << x; }
// void __print(char x) { cerr << '\'' << x << '\''; }
// void __print(const char *x) { cerr << '\"' << x << '\"'; }
// void __print(const string &x) { cerr << '\"' << x << '\"'; }
// void __print(bool x) { cerr << (x ? "true" : "false"); }
// template <typename T, typename V>
// void __print(const pair<T, V> &x) {
//     cerr << '{';
//     __print(x.first);
//     cerr << ',';
//     __print(x.second);
//     cerr << '}';
// }
// template <typename T>
// void __print(const T &x) {
//     int f = 0;
//     cerr << '{';
//     for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);
//     cerr << "}";
// }
// void _print() { cerr << "]\n"; }
// template <typename T, typename... V>
// void _print(T t, V... v) {
//     __print(t);
//     if (sizeof...(v)) cerr << ", ";
//     _print(v...);
// }
// #ifndef ONLINE_JUDGE
// #define deb(x...)                 \
//     cerr << "[" << #x << "] = ["; \
//     _print(x)
// #else
// #define deb(x...)
// #endif
// /* MACROS */
// typedef long long int ll;

// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;

// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef vector<pii> vpii;
// typedef vector<pll> vpll;

// typedef map<int, int> mii;
// typedef tuple<int, int, int> tup;

// #define ff first
// #define ss second
// #define pb push_back
// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// #define lb lower_bound
// #define ub upper_bound
// #define all(x) (x).begin(), (x).end()
// #define sz(x) (x).size()
// #define ps(x, y) fixed << setprecision(y) << x
// #define setbit(x) __builtin_popcountll(x)
// #define rep(i, a, b) for (int i = a; i < b; ++i)
// #define repr(i, a, b) for (int i = a; i >= b; --i)

// /* CONSTANTS */
// #define PI 3.141592653589793
// const ll MOD = 1e9 + 7;
// const ll INF = 1000000000;
// const ll MAX_N = 2e5 + 2;
// ll add(ll x, ll y) {ll res=x+y; return(res>=MOD?res-MOD:res);}
// ll mul(ll x, ll y) {ll res=x*y; return(res>=MOD?res%MOD:res);}
// ll sub(ll x, ll y) {ll res=x-y; return(res<0?res+MOD:res);}
// ll power(ll a,ll b,ll m=MOD){ ll ans=1; a=a%m;  while(b>0) {  if(b&1)  ans=(1ll*a*ans)%m; b>>=1;a=(1ll*a*a)%m;}return ans;}
// ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// ll lcm( ll x, ll y) { return (x*y)/gcd(x,y);}
// bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}
// /*
// 123 2
// 1232
// 1223

// */
// string yes = "POSSIBLE";
// string no = "IMPOSSIBLE";

// void printAns(int f, string s){
//     cout << "Case #"<<f << ": " << s << "\n";
// }

// int n; 
// bool ans;
// bool palCheckTab[5*10000+1][5*10000+1];   
// bool find(string str){

//      //true when substring from i to j is palindrome
   
//    for(int i = 0; i<n; i++)
//       for(int j = 0; j<n; j++)
//          palCheckTab[i][j] = false;      //initially set all values to false
 
//    int maxLength = 1;
   
//    for (int i = 0; i < n; ++i)
//       palCheckTab[i][i] = true;       //as all substring of length 1 is palindrome
 
//    int start = 0;
//    for (int i = 0; i < n-1; ++i) {
//       if (str[i] == str[i+1]) {      //for two character substring both characters are equal
//          palCheckTab[i][i+1] = true;
//          start = i;
//          maxLength = 2;
//       }
//    }
 
//    for (int k = 3; k <= n; ++k) {       //for substrings with length 3 to n
//       for (int i = 0; i < n-k+1 ; ++i) {
//          int j = i + k - 1;
//          if (palCheckTab[i+1][j-1] && str[i] == str[j]) {    //if (i,j) and (i+1, j-1) are same, then check palindrome
//             palCheckTab[i][j] = true;
//             if (k > maxLength) {
//                start = i;
//                maxLength = k;
//             }
//          }
//       }
//    }
//     if(maxLength < 5) 
//     return true;
//     else
//     return false;
// }
// void rec(string s, int idx){
//     if(!ans)
//     if(idx==n){
//         // cout << s << "\n";
//         ans |= find(s);
//     }
//     else{
//         if(s[idx]!='?') rec(s,idx+1);
//         else{
//             s[idx] = '0';
//             rec(s,idx+1);
//             s[idx] = '1';
//             rec(s,idx+1);
//         }
//     }
// }

// void solve(int f) {
//     ans = false;
//     cin >> n;
//     string s; cin >> s;
//     if(n<5) {
//         printAns(f,yes);
//     }
//     else {
//         rec(s,0);
//         if(ans) printAns(f,yes);
//         else printAns(f,no);
//     }
    

    

    
// }

int main() {
    IOS;
    ll t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);



    vector<pair<int,int>> boxes(n);
    for(int i = 0 ; i < n; i++){
        boxes[i].second = unitsperBox[i];
        boxes[i].first = noOfBox[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i=1; j < n; j++){
            if(boxes[i].first < boxes[j].first){
                swap(boxes[i],boxes[j]);
            }
        }
    }
    int ans= 0 , capacity = 0;
    for(int i = 0; i < n; i++){
        if(capacity + boxes[i].second < maxcapacity){
            ans += boxes[i].second*boxes[i].first;
        }
        else{
            ans += (maxCapacity- capacity)*boxes[i].first;
            break;
        }

    }
    print(ans);
}
