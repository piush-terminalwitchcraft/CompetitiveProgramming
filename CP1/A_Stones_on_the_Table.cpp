#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    int n; cin>>n;
    string s ; cin>>s;
    int count = 0;
    for(int i=0;i<n;i++){
        while(s[i]==s[i+1]){
            count++;
            i++;
        }
    }
    cout<<count;
}
