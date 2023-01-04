#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    int a ,t; cin>>a>>t;
    string q; cin>>q;
    for(int i=0;i<t;i++){
        for(int k = 0;k<q.size()-1;k++){
            if(q[k]=='B' && q[k+1]=='G'){
                q[k] = 'G' ; q[k+1] = 'B';
                k++;
            }
        }
    }
    cout<<q;
}
