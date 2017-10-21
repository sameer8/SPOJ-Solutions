#include<bits/stdc++.h>
using namespace std;
int dp[2005][2005];

int op2(string a,string b){
	int n=a.length();
	int m=b.length();
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0)dp[i][j]=j;
			else if(j==0)dp[i][j]=i;
			else if(a[i-1]==b[j-1])dp[i][j]=dp[i-1][j-1];
			else {
				dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
			}
		}
	}
	return dp[n][m];
}
// got tle in it
int op(string a,string b,int i,int j){
	int n=a.length();
	int m=b.length();
	if(n==i and m==j)return 0;
	if(i==n)return m-j;
	if(j==m)return n-i;
	if(dp[i][j]!=-1)return dp[i][j];
	if(a[i]==b[j]) {
		dp[i][j]= op(a,b,i+1,j+1);
		return dp[i][j];
	}
	dp[i][j] = min(op(a,b,i+1,j+1),min(op(a,b,i,j+1),op(a,b,i+1,j)))+1;
	return dp[i][j];
}

main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		for(int i=0;i<2001;i++)
		for(int j=0;j<2001;j++)
		dp[i][j]=-1;
		
		cout<<op2(a,b)<<endl;
	}
}
