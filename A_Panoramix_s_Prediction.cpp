#include<bits/stdc++.h>
using namespace std;
#define int long long
bool isPrime(int a){
    for(int i=2;i<sqrt(a)+1;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
main(){
    int n , m; cin>>n>>m;
    n++;
    while(!isPrime(n)){
        n++;
    }
    if(n==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
