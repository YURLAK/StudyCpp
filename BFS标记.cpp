#include<bits/stdc++.h>
using namespace std;
int n,m,ans[110][110],q[10100][3],head=1,tail=1,tx,ty,k=2;
int fx[5]={0,0,1,0,-1};
int fy[5]={0,1,0,-1,0};
int main(){
    cin>>n>>m;
    ans[1][1]=1;//起始点为1

    q[1][1]=1;
    q[1][2]=1;

    while(head<=tail){
        for(int i=1;i<=4;i++){
            tx=q[head][1]+fx[i];
            ty=q[head][2]+fy[i];
            if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&ans[tx][ty]==0){
                tail++;
                q[tail][1]=tx;
                q[tail][2]=ty;
                ans[tx][ty]=k;
                k++;
            }
        }
        head++;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
