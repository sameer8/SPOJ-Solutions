#include<bits/stdc++.h>
using namespace std;
char str[105][105];
bool vis[105][105];
string s="ALLIZZWELL";

void dfs(int i,int j,int c,int n,int m,int &flag){
	if(flag==1)return;
	if(i<0 or j<0 or i>=n or j>=m)return;
	if(c==10){
		flag=1;
		return;
	}
	if(str[i][j]!=s[c])return ;
	vis[i][j]=true;
	c++;
	dfs(i+1,j,c,n,m,flag);
	if(flag==1)return;
	dfs(i+1,j+1,c,n,m,flag);
	if(flag==1)return;
	dfs(i-1,j+1,c,n,m,flag);
	if(flag==1)return;
	dfs(i+1,j-1,c,n,m,flag);
	if(flag==1)return;
	dfs(i-1,j,c,n,m,flag);
	if(flag==1)return;
	dfs(i-1,j-1,c,n,m,flag);
	if(flag==1)return;
	dfs(i,j+1,c,n,m,flag);
	if(flag==1)return;
	dfs(i,j-1,c,n,m,flag);
	if(flag==1)return;
	
	vis[i][j]=false;
	c--;
	return;
}

main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>str[i][j];
				vis[i][j]=false;
			}
		}
		getchar();
		int flag=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(str[i][j]==s[0]){
					dfs(i,j,0,n,m,flag);
				}
				if(flag)break;
			}
			if(flag)break;
		}
		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
