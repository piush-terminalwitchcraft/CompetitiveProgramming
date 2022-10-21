#include<bits/stdc++.h>
using namespace std;
#define int long long
bool isDistinct(int a){
    int arr[10] = {0};
    while(a!=0){
        int k = a%10;
        if(arr[k]==1){
            return false;
        }
        arr[k]++;
        a = a/10;
    }
    return true;
}

main(){
    int y ; cin>>y;
    y++;
    while(!isDistinct(y)){
        // cout<<y<<"\n";
        y++;
    }
    cout<<y;
}