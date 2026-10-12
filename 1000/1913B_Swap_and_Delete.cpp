#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int cnt_zero=0,cnt_one=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='0')cnt_zero++;
            else cnt_one++;
        }
        int cnt_t=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '0' && cnt_one>0){
                cnt_t++;
                cnt_one--;
            }
            else if(s[i] == '1' && cnt_zero>0){
                cnt_t++;
                cnt_zero--;
            }
            else{
                break;
            }
        }
        cout<<s.size()-cnt_t<<endl;
    }

    return 0;
}