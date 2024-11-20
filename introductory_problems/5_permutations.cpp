#include<bits/stdc++.h>
using namespace std;

# define int long long

void solve(){
    
}

int32_t main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    if(n<=3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }        
    // Odd numbers first and then even numbers
    // Finding the biggest odd no and finding the biggest even number
    if(n & 1){
        // odd case
        int t = n;
        while(t > 0){
            cout<<t<<" ";
            t -= 2;
        }
        t = n-1;
        while(t > 0){
            cout<<t<<" ";
            t -= 2;
        }
    }
    else{
        int t = n-1;
        while(t>0){
            cout<<t<<" ";
            t -=2;
        }
        t = n;
        while(t>0){
            cout<<t<<" ";
            t -= 2;
        }
    }
    return 0;
}
