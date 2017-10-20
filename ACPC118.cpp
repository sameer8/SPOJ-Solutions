#include<bits/stdc++.h>
using namespace std;

main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d",&n);
		int a[n+1];
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		scanf("%d",&m);
		int b[m+1];
		for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
		sort(a,a+n);
		sort(b,b+m);
		int alt=100000000;
		for(int i=0,j=0;i<n,j<m;){
			alt=min(alt,abs(a[i]-b[j]));
			if(a[i]==b[j])break;
			if(a[i]<b[j])i++;
			else j++;
		}
		printf("%d\n",alt);
	}	
}
