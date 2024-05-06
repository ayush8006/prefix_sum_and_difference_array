#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long >a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<long long,long long>mp;
    mp[0]=1;
    long long sum=0;
    long long ans=0;
    for(int i=0;i<n;i++){
        sum=(((sum+a[i])%n)+n)%n;
        ans+=mp[((sum)%n+n)%n];
        mp[sum]++;        
    }
    cout<<ans<<endl;
    return 0;
}