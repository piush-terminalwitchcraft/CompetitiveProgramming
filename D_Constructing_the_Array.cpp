#include <bits/stdc++.h>
using namespace std;
const int N=2e6+5;
pair<int, int> a[N];
int b[N];
void fun(int l,int r){
	if(l>r) return;
	int m=(l+r)>>1;
	a[m].first=l-r;
	a[m].second=m;
	fun(l,m-1);
	fun(m+1,r); 
}
int main()
{
	int t, n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		fun(1,n);
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++) b[a[i].second]=i;
		for(int i=1;i<=n;i++) printf("%d ",b[i]);
		puts("");
	} 
	return 0;
}