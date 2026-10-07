#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       string s;cin>>s;

       map<char,int>m;
       for(int i=0;i<n;i++) {
        m[s[i]]++;
       }

       ll min_delete = 0;

       for(auto &u:m){
        min_delete+=(u.second%2);
       }

       if(min_delete==0){
        cout<<"YES"<<endl;
       }
       
       else{
        min_delete--;
        if(min_delete>k)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
       }


        }
    
  
    return 0;
}
