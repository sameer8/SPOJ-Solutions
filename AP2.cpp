#include<bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--){
		long long int a,b,s;
		cin>>a>>b>>s;
		long long int n,r,x;
		n=(s*2)/(a+b);
		r=(b-a)/(n-5);
		x=a-2*r;
		cout<<n<<endl;
		for(int i=0;i<n;i++,x+=r)
		cout<<x<<" ";
		cout<<endl;
	}
}
