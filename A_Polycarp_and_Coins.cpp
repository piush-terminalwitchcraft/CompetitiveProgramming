#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define i__ int 


signed main(){
    int t;
    cin>>t;
        while(t--){
            int n, a, b, diff = 999; cin>>n;
            int k = n/3;
            a = k ; b = k;
            if(a + b*2==n){
            cout<<a<<" "<<b<<"\n";
            }
            else if(a + b*2<n){
                a++;
                if(a+b*2==n){
                cout<<a<<" "<<b<<"\n";
                }
                else{
                    // cout<<"c1\n";
                }
                a--;b++;
                if(a+b*2==n){
                cout<<a<<" "<<b<<"\n";
                }
                else{
                    // cout<<"c1##\n";
                }
            }
            else if(a + b*2>n){
                b++;
                if(a+2*b==n){
                cout<<a<<" "<<b<<"\n";
                }
                else{
                    // cout<<"c2";
                }
                a++;b--;
                if(a+b*2==n){
                cout<<a<<" "<<b<<"\n";
                }
                else{
                    // cout<<"c1##\n";
                }
            }
        }
}