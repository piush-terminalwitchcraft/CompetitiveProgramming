#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    int t; cin>>t;
    while(t--){
        int a , b; cin>>a>>b;
        if((a+b)%2==0){
            cout<<3;
        }
        else{
            cout<<2;
        }
        cout<<endl;
    }
}
