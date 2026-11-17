#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve(){
  ll n;cin>>n;
  vector<ll>v(n);
  ll sum=0;
  ll max_freq = 0,most_freq_element =0;
  map<ll,ll>m;
  for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
    m[v[i]]++;
    if(m[v[i]]> max_freq){
        max_freq = m[v[i]];
        most_freq_element = v[i];
    }
  }
  ll sum_rem=0;
  ll rem = n-max_freq;
  if(max_freq <=rem)cout<<sum<<endl;
  else{
    for(int i=0;i<n;i++){
        if(v[i] != most_freq_element)sum_rem+=v[i];
    }
    ll ans = sum_rem+ rem*most_freq_element ;
    ll extra = max_freq - rem;
    if(extra >=2)cout<< ans + most_freq_element*2<<endl;
    else cout<< ans + most_freq_element*extra<<endl;
  }

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