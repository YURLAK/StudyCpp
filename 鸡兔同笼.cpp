#include <bits/stdc++.h>
using namespace std;
int feet,head,h,r,ha,ra;
int main(){
	cout<<"[INPUT head]";cin>>head;
	cout<<"[INPUT feet]";cin>>feet;
	r = head;
	for(h = 0;h<head;h++){
		if(h*2+r*4 == feet){
			ha = h;
			ra = r;
			break;
		}
		else{
			r--;
		}
	}
	cout<<endl<<"[A]Chicken:"<<h<<endl<<"[A]Rabbits:"<<r;
}
