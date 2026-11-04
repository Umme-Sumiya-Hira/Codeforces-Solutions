#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve(){
    int l,r;cin>>l>>r;
    
    if( r>0 && l>0)cout<<r-l<<endl;
    else if(l<=0 && r>=0 && r+l != 0)cout<<abs(r+l)-1<<endl;
    else if(l<0 && r<0)cout<<(abs(l)-abs(r))<<endl;
    else cout<<0<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}