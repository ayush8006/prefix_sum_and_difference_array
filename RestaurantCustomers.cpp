#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int>mp;

    while(n--){
       int a,b;
       cin>>a>>b;
       mp[a]++;mp[b]--;
    }

    int ans=0;
    int c=0;

    for(auto it:mp){

        c+=it.second;
        ans=max(ans,c);

    }
    cout<<ans<<endl;  

   return 0;
}