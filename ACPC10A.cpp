#include<bits/stdc++.h>
using namespace std;

main()
{
	while(true){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a==0 and b==0 and c==0)break;
		if(b-a==c-b){
			printf("AP %d\n",c+(b-a));
		}
		else{
			printf("GP %d\n",c*(b/a));
		}
	}
}
