#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve(){
  ll a,b,c;cin>>a>>b>>c;
  ll sum = a+b+c;
  ll mx = max({a,b,c});
  ll mn = min({a,b,c});

  if(a==b && b==c)cout<<0<<endl;
  else if(sum-mx > mx) cout<<mx-mn<<endl;
  else cout<< (sum-mx)-mn <<endl;

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