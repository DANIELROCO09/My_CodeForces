#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int numero;
		cin>>numero;
		int a=numero / 10;
		int b=numero % 10;
		cout<<a+b<<'\n';
	}



	return 0;
}
