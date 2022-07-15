#include<bits/stdc++.h>
using namespace std;
int N,a,b,c,t,r;
int main(){
for(cin>>N>>a>>b;cin>>t,N--;)
if(t==1)a?a--:b?b--,c++:c?c--:r++;
else b?b--:r+=2;
cout<<r;
}