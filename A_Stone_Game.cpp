#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define i__ int 
#define TIME cerr<<"Time Taken:"<<(float)clock()/CLOCKS_PER_SEC*1000<<"ms"<<endl
//  When something is important enough, you do it even if the odds are not in your favor.
signed main(){
int t;
cin>>t;
while(t--){
    int n ; cin>>n;
    int mx = INT_FAST64_MIN;
    int mn = INT_FAST64_MAX;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int k ;
        cin>>k;
        arr.push_back(k);
    }
    int lk = -1 , hk = -1;
    for(int i=0;i<n;i++){
        // cout<<arr[i]<<" ";
        if(arr[i]>mx){
            mx = arr[i];
            hk = i;
        }
        if(arr[i]<mn){
            mn = arr[i];
            lk = i;
        } 
    }
    hk++; lk++;
    int l1=n-lk+1,h1=n-hk+1;

        int ans=min(max(lk,hk),max(l1,h1));
        ans=min(ans,min(l1+hk,h1+lk));
        cout<<ans<<endl;
    
} 
    TIME;
}   