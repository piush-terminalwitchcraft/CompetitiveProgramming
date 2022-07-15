#include<bits/stdc++.h>
using namespace std;
#define int  long long

int solution(int arr[] , int avg , int n){
    if(avg%n){
       return -1; 
    }
    else{
        int t = avg/n;
        int  count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>t){
                count++;
            }
        }
        return count;
    }
}
signed main(){
    int t; 
    cin>>t;
    while(t--){
        int n ; cin>>n;
        int arr[n] ;
        int avg = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            avg+=arr[i];
        }
        cout<<solution(arr,avg,n)<<"\n";
    }

}
