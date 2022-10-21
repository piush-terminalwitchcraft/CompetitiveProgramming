#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define i__ int 

bool chkSort(int arr[], int n){
    bool f = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            f = false;
            return f;
        }
    }
    return f;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count = 0;
        bool flag = false;
        while(flag!=true){
            flag = true;
            for(int i=0;i<n;i = i+2){
                if(arr[i]>arr[i+1]&& i+1<n){
                    int tmp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = tmp;
                    flag = false;
                }
            }
            if(flag==true){
                if(chkSort(arr,n)==true){
                    break;
                }
                else{
                    flag = false;
                    count++;
                }
            }
            else{
                count++;
            }
            flag = true;
            for(int i=1;i<n;i = i+2){
                if(arr[i]>arr[i+1]&& i+1<n){
                    int tmp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = tmp;
                    flag = false;
                }
            }
            if(flag==true){
                if(chkSort(arr,n)==true){
                    break;
                }
                else{
                    flag = false;
                    count++;
                }
            }
            else{
                count++;
            }
        }   
        
        cout<<count<<"\n";
    }
}
        // for(int i = 0;i<n;i++){
        //     for(int j=0;j<n;j = j+2){
        //         if(arr[j]>arr[j+1] && j+1<n){
        //             int temp = arr[j];
        //             arr[j] = arr[j+1];
        //             arr[j+1] = temp;
        //         }
        //     }
        //     for(int k=0;k<n;k++){
        //         cout<<arr[k]<<" ";
        //     }
        //     cout<<endl;
        //     if(chkSort(arr,n)==true){
        //         break;
        //     }
        //     else{
        //         count++;
        //     }
        //     for(int j=1;j<n-1;j = j+2){

        //         if(arr[j]>arr[j+1] && j+1<n){
        //             int temp = arr[j];
        //             arr[j] = arr[j+1];
        //             arr[j+1] = temp;
        //         }

        //     }
        //     count++;
        //     for(int k=0;k<n;k++){
        //         cout<<arr[k]<<" ";
        //     }
        //     cout<<endl;
        //     if(chkSort(arr,n)==true){
        //         break;
        //     }
        //     else{
        //         count++;
        //     }