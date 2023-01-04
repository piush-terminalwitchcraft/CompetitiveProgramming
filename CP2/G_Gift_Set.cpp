#include<bits/stdc++.h>
using namespace std;
#define int  long long

signed main(){
    int t; 
    cin>>t;
    while(t){
        int x, y, a, b, ans=0, d;
		cin >> x >> y >> a >> b;
		if(x>y) swap(x, y);
		if(a>b) swap(a, b);
		if(a!=b)ans+=min((y-x)/(b-a), min(x/a, y/b));
		x-=a*ans;
		y-=b*ans;
		d=min(x, y)/(a+b);
		ans += d*2;
		x-=(a+b)*d;
		y-=(a+b)*d;
		if(x>=a&&y>=b)ans++;
		cout << ans <<"\n";
        t--;
    }
}