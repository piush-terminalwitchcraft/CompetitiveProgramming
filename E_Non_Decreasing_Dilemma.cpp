#include<bits/stdc++.h>
using namespace std;
#define int long long
int find(int arr[],int l, int r){
    if(l==r){
        return 1;
    }
    int count =0 , len = 1;
    for(int i = l;i<r;i++){
        count++;
        if(arr[i] <=arr[i+1]){
            len++;
        }
        else{
            count+=(len-1)*len/2;
            len = 1;
        }
    }
    count+=(len-1)*len/2;
    return ++count;
}
main(){
    int n , q; cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(q--){
        int a ,b , c; cin>>a>>b>>c;
        switch (a)
        {
        case 1:
            arr[--b] = c;
            break;
        case 2:
            /* code */
            cout<<find(arr,--b,--c)<<endl;
            break;
        
        default:
            break;
        }
    }
}
