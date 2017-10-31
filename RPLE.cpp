#include<bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		int n,r,x,y,kk;
		cin>>n>>r;
		int a[n+1],p[n+1];
		for(int i=0;i<=n;i++)
		{
			a[i]=0;
			p[i]=0;
		}
		int flag=0;
		for(int i=0;i<r;i++)
		{
			cin>>x>>y;
			if(a[x]==1)flag=1;
			if(p[y]==1)flag=1;
			a[y]=1,p[x]=1;
		}
		if(!flag)cout<<"Scenario #"<<k<<": spying\n";
		else cout<<"Scenario #"<<k<<": spied\n";
		}
}
