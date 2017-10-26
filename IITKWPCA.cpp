#include<bits/stdc++.h>
using namespace std;

main(){
	int t,o;
	cin>>t;
	getchar();
	while(t--){
		string s;
		map<string,int> mp;
		getline(cin,s);
		istringstream iss(s);
		string word;
		while(iss>>word){
			mp[word]++;
		}
		cout<<mp.size()<<endl;
	}
}
