#include<bits/stdc++.h>
using namespace std;
int n,k,T,x;
int main(){
	scanf("%d",&T);
	while (T--){
		scanf("%d%d",&n,&k);
		map<int,int>mp;
		bool ans=0;
		for (int i=1;i<=n;i++) {
			scanf("%d",&x); if (mp[x+k]||mp[x-k]) ans=1;
			mp[x]=1;
		}
		if (ans) puts("YES"); else puts("NO");
	}
}