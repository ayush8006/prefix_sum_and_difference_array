#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    map<int,int>mp;

    //mp[0]=1;
    int sum=0;
    long long ans=0;
    mp[0]=1;
    for(int i=0;i<n;i++){

        sum+=(s[i]-'1');
        if(mp.find(sum)!=mp.end()){
            ans+=mp[sum];
        }
        mp[sum]++;
       
    }

cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}