#include<bits/stdc++.h>
using namespace std;

# define int long long

int32_t main() {
    // Your code here
    string s;
    cin>>s;
    int res=1;
    int temp=1;
    for(int i=1;i<s.length();i++){
        if(s[i] == s[i-1]){
            temp++;
            res = max(temp, res);
        }
        else temp = 1;
    }
    cout<<res<<'\n';
    return 0;
}
