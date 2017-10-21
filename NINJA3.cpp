#include<bits/stdc++.h>
using namespace std;

unsigned long long int gcd(unsigned long long int a,unsigned long long int b){
	if(a>b){
		if(b==0)return a;
		else return gcd(a%b,b);
	}
	else {
		if(a==0)return b;
		else return gcd(b%a,a);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long int n,a,b;
		cin>>n>>a>>b;
		a=gcd(a,b);
		for(int i=0;i<a;i++)
		cout<<n;
		cout<<endl;
	}
	
}
