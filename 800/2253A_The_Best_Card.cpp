#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve(){
  ll n;cin>>n;
  bool cnd = false;
  
  for(int i=2;i<n+1;i++){
    if((n+1)%i == 0){
        cnd = true;break;
    }
  }

  if(cnd)cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
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