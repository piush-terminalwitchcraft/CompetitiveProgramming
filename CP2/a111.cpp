#include <bits/stdc++.h>

using namespace std;

signed main(){
    int n;
    string s; 
    cin.getline(s); 
    n = s.size();
    string e; cin >> e; 
    if(e=="ODD"){
        int i = 1, j = (n%2==0?n-1:n);
        while(i<j) swap(s[i-1],s[j-1]),i+=2,j-=2;
    }
    else{
        int i = 2, j = (n%2==0?n:n-1);
        while(i<j) swap(s[i-1],s[j-1]),i+=2,j-=2;

    }
    cout << s;
}