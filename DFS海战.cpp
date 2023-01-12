#include<bits/stdc++.h>
using namespace std;
int r,c,tx=0,ty=0,ans=0;
char a[1010][1010];
int fx[4]={0,-1,0,1};
int fy[4]={1,0,-1,0};
void dfs(int x,int y){
	a[x][y]='*';
	for(int i=0;i<4;i++){
		tx=x+fx[i];
		ty=y+fy[i];
		if(tx>0&&tx<=r&&ty>0&&ty<=c&&a[tx][ty]=='#'){
			dfs(tx,ty);
		}
	}
}
bool d(int i,int j){
	int n=0;
	if(a[i][j]=='#') n++;
	if(a[i+1][j]=='#') n++;
	if(a[i][j+1]=='#') n++;
	if(a[i+1][j+1]=='#') n++;
	if(n==3) return 0;
	else return 1; 
}
int main(){
	cin>>r>>c;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
		}
	}//输入矩阵
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(d(i,j)==0){
				cout<<"Bad placement.";
				return 0;
			}
		}
	}//判断 
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(a[i][j]=='#'){
				ans++;
				dfs(i,j);
			} 
		}
	}
	cout<<"There are "<<ans<<" ships.";
}
