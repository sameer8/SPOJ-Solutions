#include<bits/stdc++.h>
using namespace std;

main(){
	int t,testt;
	cin>>t;
	getchar();
	for(int qq=1;qq<=t;qq++){
		cout<<"Case #"<<qq<<":"<<endl;
		string s;
		vector<string> v;
		int freq[26]={0};
		getline(cin,s);
		istringstream iss(s);
		string word;
		while(iss>>word){
			v.push_back(word);
			for(int i=0;i<word.length();i++)
			freq[word[i]-'a']++;
		}
		int max=0,count=0,z;
		for(int i=0;i<26;i++){
			if(freq[i]>freq[max]){
			max=i;
			count=1;
		}
		else if(freq[i]==freq[max])count++;
		//cout<<freq[i]<<" ";
		}
		
		
		//cout<<"max freq "<<max<<endl;
		for(int i=0;i<v.size();i++)
		{
			word=v[i];
			int h[26]={0};
			for(int j=0;j<word.length();j++)
			h[word[j]-'a']++;
			z=0,count=1;
			for(int j=1;j<26;j++)
			{
				if(h[j]>h[z]){
				z=j;
				count=1;
				}
				else if(h[j]==h[z])count++;
				//cout<<h[j]<<z<<" ";
			}
			
			//cout<<"max "<<h[z]<<endl;
			if(count==1 and freq[z]==freq[max]){
				cout<<word<<endl;
			}
		}
	}
}
