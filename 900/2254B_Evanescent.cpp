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
     int n;
     cin>>n;
     string s;
     cin>>s;
     int block = 1,save=0;

     for(int i=0;i<n-1;i++){
        if(s[i] != s[i+1])block++;
     }
     for(int i=1;i<n-1;i++){
        if(s[i] != s[i-1] && s[i] != s[i+1]){
            if(s[i-1] == s[i+1]){
                save = 2;
            }
            else{
            save=max(save,1);
         }
        
       }
        
     }
     cout<<block-save<<endl;
        

    }
    return 0;
}