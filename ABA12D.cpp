#include<bits/stdc++.h>
using namespace std;
bool prime[1000005];
void precompute(){
	int n=1000000;
	memset(prime,true,sizeof(prime));
	prime[1]=false;
	prime[0]=false;
	for(int i=2;i*i<=n;i++){
		if(prime[i]){
			for(int j=i*i;j<=n;j+=i)
			prime[j]=false;
		}
	}
}

 main(){
 	int t,x;
 	scanf("%d",&t);
 	while(t--){
 		int a,b;
 		scanf("%d%d",&a,&b);
 		int c=0;
 		for(int i=a;i<=b;i++){
 			if(prime[i])c++;
 			else if(i>2 and prime[i-2])c++;
		 }
		 printf("%d\n",c);
	 }
 }
