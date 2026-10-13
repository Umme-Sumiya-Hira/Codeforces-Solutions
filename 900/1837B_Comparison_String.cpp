#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int max_cnt1=0,max_cnt2 =0;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){

            if(s[i] =='<' ){
                cnt1++;
                cnt2=0;
                max_cnt1 = max(max_cnt1,cnt1);
            }
            else{
                cnt2++;
                cnt1=0;
                max_cnt2 = max(max_cnt2,cnt2);

            }
        }
        
      cout<<max(max_cnt1,max_cnt2) + 1<<endl;

       
    }

    return 0;
}