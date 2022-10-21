#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    string s; cin>>s;
    int key  = 0 , lwr = 0, upr = 0;
    int k = abs('A'-'a');
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            lwr++;
        }
        else{
            upr++;
        }
    }
    if(lwr>=upr){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] +=k;
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i] -=k;
            }
        }
    }
    cout<<s;
}
