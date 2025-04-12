#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string w; cin>>w;
		string root= w.substr(0,w.size()-2);
		cout<<root+"i"<<'\n';
	}


	return 0;
}