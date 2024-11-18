# include<bits/stdc++.h>
using namespace std;

# define int long long

int32_t main(){
    int n;
    set<int> st;
    cin>>n;
    for(int i=1;i<=n;i++)st.insert(i);
    int num;
    for(int i=1;i<n;i++){
        cin>>num;
        st.erase(num);
    }
    cout<<*st.begin()<<endl;
}

