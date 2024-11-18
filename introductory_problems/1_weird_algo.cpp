#include<bits/stdc++.h>
using namespace std;

# define int long long

int32_t main() {
    int num;
    cin>>num;
    while(num!=1){
        cout<<num<<" ";
        if((num & 1)){
            num = 3*num + 1ll;
        }
        else num /= 2;
    }
    cout<<"1"<<'\n';
    return 0;
}

