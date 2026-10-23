#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    
    while(t--){
      string s;cin>>s;
      ll digit = s.length()-1;
      ll first_digit = s[0]-'0';//convert char to int
      cout<<(digit * 9)+first_digit<<endl;
       
    }
    return 0;
}