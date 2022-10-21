#include<bits/stdc++.h>
using namespace std;
 

int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        long long n;
        cin>>n;
        if(n<10){
            cout<<n<<"\n";
        }
        else if(n<100 && n>9){
            cout<<9+int(n/11)<<"\n";
        }
        else if(n<1000 && n>99){
            cout<<9+9+int(n/111);
        }
        else if(n<10000 && n>999){
            cout<<9+9+9+int(n/1111);
        }
        else if(n<100000 && n>9999){
            cout<<9+9+9+9+int(n/11111);
        }
        else if(n<1000000 && n>99999){
            cout<<9+9+9+9+9+int(n/111111);
        }
        else if(n<10000000 && n>999999){
            cout<<9+9+9+9+9+9+int(n/1111111);
        }
        else if(n<100000000 && n>9999999){
            cout<<9+9+9+9+9+9+9+int(n/11111111);
        }
        else if(n<1000000000 && n>99999999){
            cout<<9+9+9+9+9+9+9+9+int(n/111111111);
        }
        t--;
    }
    
    return 0;
}