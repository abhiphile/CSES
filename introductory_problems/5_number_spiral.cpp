#include<bits/stdc++.h>
using namespace std;

# define int long long

void solve(){
    int n, m;
    cin>>n>>m;
    int res=0;
    int q = max(n, m);
    res = q*q-q+1;
    if(n>m){
        if(q & 1) res -= n-m;
        else res += n-m;
    }
    else{
        if(q & 1) res += m - n;
        else res -= m - n;
    }
    cout<<res<<endl;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }    
    return 0;
}
