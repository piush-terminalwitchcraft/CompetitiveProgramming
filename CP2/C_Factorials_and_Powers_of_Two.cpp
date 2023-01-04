#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[10000],sum[1000000],n;
int i,j,m,t,ans;
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>t;
	while (t--)
	{
		ans=114514;m=1;
		cin>>n;
		f[0]=1;
		for (i=1;f[i-1]<=n;i++) f[i]=f[i-1]*i,m=i;
		for (i=0;i<1<<m;i++)
		{
			ll tot=0;
			int cnt=0;
			for (j=0;j<m;j++) if (i>>j&1) tot+=f[j],cnt++;
			if (n>=tot) ans=min(ans,cnt+__builtin_popcountll(n-tot));
		}
		cout<<ans<<'\n';
	}
}