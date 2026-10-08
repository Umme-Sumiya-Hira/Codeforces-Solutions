#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 
    
    while (t--) {
     int n;cin>>n;
     string a;cin>>a;
     vector<int>pref(n,0),suff(n,0);
     set<char> st;
     for(int i=0;i<n;i++){
        st.insert(a[i]);
        pref[i]= st.size();
     }
     st.clear();
     for(int i=n-1;i>-1;i--){
        st.insert(a[i]);
        suff[i]=st.size();
     }
     int ans=0;
     for(int i=0;i<n-1;i++){
        ans=max(ans,pref[i]+suff[i+1]);
     }
     cout<<ans<<endl;

    }
    return 0;
}