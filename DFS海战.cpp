#include <bits/stdc++.h>
using namespace std;
int r,c,ans=0;
char a[1010][1010];
int fx[4]={0,-1,1,0};
int fy[4]={-1,0,0,1};
int dfs(int x,int y){
	a[x][y]='*';
	for(int i=0;i<4;i++){
		if(x+fx[i]>0&&x+fx[i]<=r&&y+fy[i]>0&&y+fy[i]<=c&&
		a[x+fx[i]][y+fy[i]]=='#') dfs(x+fx[i],y+fy[i]);
	}
}
bool d(int i,int j){
	int n=0;
	if(a[i][j]=='#') n++;
	if(a[i+1][j]=='#') n++;
	if(a[i][j+1]=='#') n++;
	if(a[i+1][j+1]=='#') n++;
	if(n==3) return 0;
	return 1;
}
int main(){
	cin>>r>>c;
	register int i,j;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];	
		} 
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(i<r&&j<c&&d(i,j)==0){
				cout<<"Bad placement.";
				return 0;//不合法就没必要继续了 
			}
		} 
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(a[i][j]=='#')
				ans++;
				cout<<ans<<endl;
				dfs(i,j);
		}
	}
	printf("There are %d ships.",ans);
	return 0;
}
