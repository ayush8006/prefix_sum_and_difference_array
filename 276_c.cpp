#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,q;
    cin>>n>>q;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    vector<int>pre(200005,0);
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        pre[l]+=1;
        pre[r+1]-=1;
    }
    for(int i=1;i<200005;i++){
        pre[i]+=pre[i-1];
    }
    sort(pre.begin(),pre.end(),greater<int>());
    long long ans=0;

    int i=0;
    while(pre[i]>0){
        ans+=a[i]*pre[i];
        i++;
    }
    cout<<ans<<endl;

}
int main()
{
    int t=1;
    //cin>>t;
    while(t--){
        solve();

    }
    return 0;
}