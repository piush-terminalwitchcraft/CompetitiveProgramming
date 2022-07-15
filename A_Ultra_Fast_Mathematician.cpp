#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    string a ,b; cin>>a>>b;
    int k = a.size();
    for(int i=0;i<k;i++){
        if(a[i]==b[i]){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
}
