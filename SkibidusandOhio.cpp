#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;

	while(t--){
		string s; cin>>s;
		if(s.size()<=1){
			cout<<s.size()<<endl;
		}else{
			bool flag=false;
			for(int i=0;i<s.size()-1;i++){
				if(s[i]==s[i+1]){
					flag=true;
					break;
				}
			}
			if(flag){
				cout<<1<<endl;
			}else cout<<s.size()<<'\n';
		}	
	}
	return 0;
}