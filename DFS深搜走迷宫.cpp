#include <bits/stdc++.h>
using namespace std;
int s,sd,e,ed,n,a[110][110],tx,ty;
int fx[5]={0,1,0,-1,0};
int fy[5]={0,0,1,0,-1};
bool f = false;
void dfs(int x,int y)
{
	cout<<x<<" "<<y<<endl;
	a[x][y]=1;
	for(int k=1;k<=4;k++)
	{
		tx=x+fx[k];
		ty=y+fy[k];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&a[tx][ty]==0)
		{
			if(tx==e&&ty==ed){
				f = true;
			}
			else{
				dfs(tx,ty);	
			}
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];	
		} 
	}//输入迷宫
	
	cin>>s>>sd>>e>>ed;//输入出发、结束点
	if(a[s][sd]==1||a[e][ed]==1)
	{
		cout<<"NO";
	}
	else
	{
		dfs(s,sd);
		if(f==true){
			cout<<"YES";	
		}
		else{
			cout<<"NO";
		}
	}
	return 0;
}
