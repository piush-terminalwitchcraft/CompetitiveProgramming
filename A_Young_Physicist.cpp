#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    int t; cin>>t;
    int x, y, z;
    int xs =0, ys =0, zs =0;
    while(t--){
        cin>>x>>y>>z;
        xs+=x ; ys+=y ; zs+=z;
    }
    if(xs==0 && ys==0 && zs==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
