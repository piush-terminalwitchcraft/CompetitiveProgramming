#include<bits/stdc++.h>
using namespace std;
long long int x, y, i, a[100001], b[100001], c[100001], d[100001], l[100001], r[100001], n, m, k;
int main()
{
   cin>>n>>m>>k;
   for(i=1; i<=n; i++) cin>>a[i];
   for(i=1; i<=m; i++) cin>>l[i]>>r[i]>>d[i];
   for(i=1; i<=k; i++) cin>>x>>y, b[x]++, b[y+1]--;
   for(i=1; i<=m; i++) b[i] += b[i-1], c[l[i]] +=b[i]*d[i], c[r[i]+1] -= b[i]*d[i];
   for(i=1; i<=n; i++) c[i]+=c[i-1], cout<<c[i]+a[i]<<" ";
}