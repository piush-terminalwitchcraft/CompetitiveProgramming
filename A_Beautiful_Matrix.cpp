#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    int k1 , k2 , arr[5][5];
    for(int i=0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                k1= i;k2 = j;
            }
        }
    }
    cout<<abs(k1-2)+abs(k2-2);
}
