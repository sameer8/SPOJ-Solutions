#include<bits/stdc++.h>
using namespace std;

long long int p[10000009],dp[10000009];

void prime(){
	for(int i=2;i<=10000009;i++){
		
		if(p[i]==0){
			for(int j=i;j<10000009;j+=i)
			if(p[j]==0)p[j]=i;
		}
		dp[i]=dp[i-1]+p[i];
	}
	return ;
}

main()
{
	prime();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
}
