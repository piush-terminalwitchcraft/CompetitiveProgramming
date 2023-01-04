#include <iostream>
using namespace std;
int main()
{ 
	int n;
	cin>>n;
	string ch,s;
	for(int i=0;i<18;i++) ch +="Yes";
	while(n--){
		cin>>s;
		if(ch.find(s)!= -1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		}
  }