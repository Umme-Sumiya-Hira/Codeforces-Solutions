#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    
    while(t--){
      ll n;cin>>n;
      ll arr[n];
      
      for(int i=0;i<n;i++){
        cin>>arr[i];
        
      }
      int max1=0,max2=0,max3=0;

      for(int i=1;i<n;i++) {
        int a =(arr[i]-arr[0]); 
        max1 = max(max1,a);
      }
      for(int i=0;i<n-1;i++){
        int b = arr[n-1]-arr[i];
        max2 = max(max2,b);
      }
      for(int i=0;i<n-1;i++){
        int c = arr[i]-arr[i+1];
        max3= max(max3,c);
      }

      cout<<max({max1,max2,max3})<<endl;
    }
    return 0;
}