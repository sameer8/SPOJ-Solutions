#include<bits/stdc++.h>

using namespace std;

main()
{
	int t,kk;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int temp,num,mul,len;
		mul=2;
		len=1;
		while(n>mul){
			len+=1;
			n-=mul;
			mul*=2;
		}
		n=n-1;
		//cout<<n<<endl;
		string s="56";
		string tem="";
		while(len--){
			temp=n%2;
			tem=s[temp]+tem;
			n/=2;
		}
		
		cout<<tem<<endl;
	}
}
