#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int A=0,B=0;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			A+=(s[i]=='A');
			B+=(s[i]=='B');
		}
		if(A>B) cout<<'A'<<'\n';
		else cout<<'B'<<'\n';
	}
	return 0;
}
