#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,q;
    cin>>n>>k>>q;
    int pre[200005];
    for(int i=0;i<200005;i++){
        pre[i]=0;
    }
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        pre[a]+=1;
        pre[b+1]-=1;        
    }
    for(int i=1;i<200005;i++){
        pre[i]+=pre[i-1];
      
    }
    for(int i=1;i<200005;i++){
         if(pre[i]>=k){
        pre[i]=1;
       }
       else{
        pre[i]=0;
       }
        pre[i]+=pre[i-1];
        //cout<<pre[i]<<" ";
       
    }
    for(int i=0;i<q;i++){
        long long l,r;
        cin>>l>>r;
        long long ans=0;
        ans+=pre[r]-pre[l-1];        
            cout<<ans<<endl;        
    }

    return 0;
}