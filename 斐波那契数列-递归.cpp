#include <bits/stdc++.h>
using namespace std;
long long fibonacci(int n) {
     long long f[2] = {0, 1};
     if(n<2)return f[n];
     
     return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	int x;
	cin>>x;
	cout<<fibonacci(x);
}
