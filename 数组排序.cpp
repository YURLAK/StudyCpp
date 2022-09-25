#include <bits/stdc++.h>
using namespace std;
int main(){
	int num,t;
	cin>>num;
	int a[num];
	for(int i=0;i<num;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=num-1;i++)
	{
		for(int j=0;j<=num-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<=num-1;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
