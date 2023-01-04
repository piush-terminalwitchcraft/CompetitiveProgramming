#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    string str , ans = "";
    int k = 1, i = 0;;
    cin>>str;
    for(int i = 0;i<str.size();){
        if(str[i]=='.'){
            ans = ans+ '0';
            i++;
        }
        if(str[i]=='-'){
            if(str[i+1]=='-'){
                ans+='2';
            }
            else{
                ans+='1';
            }
            i = i+2;
        }
    }
    cout<<ans;
}
