#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b==0)return a;
	else return gcd(b,a%b);
}

main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int a;
		cin>>a>>s;
		int temp=0,l=s.length();
		for(int i=0;i<l;)
		{
			if(temp>=a)temp%=a;
			else temp=(temp*10)+(s[i++]-'0');
		}
		temp%=a;
		cout<<gcd(a,temp)<<endl;
	}
}
