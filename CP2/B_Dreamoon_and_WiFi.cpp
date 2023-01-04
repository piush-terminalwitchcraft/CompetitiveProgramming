#include <bits/stdc++.h>
using namespace std;
int c,q,x,i;
double m;
string a,b;
int f(int n){
int p=1;
for (n++;n-->1;)p*=n;
return p;
}
main() {
cin>>a>>b;
for (;i<a.size();i++)a[i]=='+'?x++:x--,b[i]=='+'?c++:b[i]=='-'?c--:q++;
x=abs(x-c);
// cout<<x<<" "<<c<<" "<<q<<" ";
if(x<=q && x%2==q%2)m=f(q)/(f(x+(q-x)/2)*f((q-x)/2));
cout<<setprecision(9)<<m/(1<<q);
}