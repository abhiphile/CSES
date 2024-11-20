#include<bits/stdc++.h>
using namespace std;

# define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int res = 0;
    int pm = nums[0];
    for(int i=1;i<n;i++){
        if(nums[i] < pm){
            // Increment our res
           res += (pm - nums[i]);
        }
        pm = max(pm, nums[i]);
    }
    cout<<res<<endl;
    return;
}

int32_t main(){
    solve();
    return 0;
}
