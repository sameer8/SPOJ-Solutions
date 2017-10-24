#include<bits/stdc++.h>
using namespace std;

long long int a[100005],b[100005];

main()
{
	int t;
	cin>>t;
	while(t--){
		int n,flag=0;
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cin>>b[i];
		long long int pre=-1;
		for(int i=0;i<n;i++)
		{
			long long int m1=min(a[i],b[i]),m2=max(a[i],b[i]);
			if(m1>=pre)pre=m1;
			else{
				if(m2>=pre)pre=m2;
				else {
					flag=1;
					break;
				}
			}
		}
		if(flag)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
