#include<bits/stdc++.h>
using namespace std;

main(){
	char s[10];
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<9;i++)
		cin>>s[i];
		int x,o;
		x=0,o=0;
		for(int i=0;i<9;i++)
		if(s[i]=='O')o++;
		else if(s[i]=='X')x++;
		int flag1=0,flag2=0;
		
		if(s[0]=='O' and s[4]=='O' and s[8]=='O' )flag2=1;
		if(s[0]=='X' and s[4]=='X' and s[8]=='X' )flag1=1;
		if(s[2]=='X' and s[4]=='X' and s[6]=='X' )flag1=1;
		if(s[2]=='O' and s[4]=='O' and s[6]=='O' )flag2=1;
		
		if(s[3]=='O' and s[4]=='O' and s[5]=='O' )flag2=1;
		if(s[3]=='X' and s[4]=='X' and s[5]=='X' )flag1=1;
		if(s[1]=='X' and s[4]=='X' and s[7]=='X' )flag1=1;
		if(s[1]=='O' and s[4]=='O' and s[7]=='O' )flag2=1;
		
		if(s[0]=='O' and s[1]=='O' and s[2]=='O' )flag2=1;
		if(s[0]=='X' and s[1]=='X' and s[2]=='X' )flag1=1;
		if(s[8]=='X' and s[7]=='X' and s[6]=='X' )flag1=1;
		if(s[8]=='O' and s[7]=='O' and s[6]=='O' )flag2=1;
		
		if(s[2]=='O' and s[5]=='O' and s[8]=='O' )flag2=1;
		if(s[2]=='X' and s[5]=='X' and s[8]=='X' )flag1=1;
		if(s[0]=='X' and s[3]=='X' and s[6]=='X' )flag1=1;
		if(s[0]=='O' and s[3]=='O' and s[6]=='O' )flag2=1;
		
		if(flag1 and !flag2 and x!=o+1)cout<<"no\n";
		else if(!flag1 and flag2 and x!=o)cout<<"no\n";
		else if(flag1 and flag2)cout<<"no\n";
		else if(o>x or x-o>1)cout<<"no\n";
		else cout<<"yes\n";
	}
}
