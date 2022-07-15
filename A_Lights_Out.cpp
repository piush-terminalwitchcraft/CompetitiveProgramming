#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    int arr[5][5] = {0} , ans[3][3];
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            ans[i-1][j-1] = arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i-1][j]+arr[i][j-1];
            ans[i-1][j-1] = (ans[i-1][j-1]+1)%2;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}
