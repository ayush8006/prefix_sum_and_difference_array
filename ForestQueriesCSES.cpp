#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;

    vector<vector<int>>grid(n+1,vector<int>(n+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch;
            cin>>ch;
            grid[i][j]=(ch=='*'?1:0);
        }
    }

    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            grid[i][j]+=(grid[i-1][j]+grid[i][j-1]-grid[i-1][j-1]);
        }
    }
   

    for(int i=0;i<q;i++){
        int y1,x1,y2,x2;
        cin>>y1>>x1>>y2>>x2;

        int ans=grid[y2][x2]-grid[y1-1][x2]-grid[y2][x1-1]+grid[y1-1][x1-1];

       // cout<<grid[x2][y2]<<" "<<grid[x1-1][y2]<<" "<<grid[x2][y1-1]<<"  "<<grid[x1-1][y1-1]<<endl;

        cout<<ans<<endl;
    }

    return 0;
}