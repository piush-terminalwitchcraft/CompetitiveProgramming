#include<bits/stdc++.h>
using namespace std;
int a[200002];
int main(){
	int t;
	cin>>t; 
	while(t--){
		int n,ma=1,mi=1;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]>a[ma]) ma=i;
			if(a[i]<a[mi]) mi=i;
		}
		cout<<mi<<" "<<ma<<endl;
	}
}