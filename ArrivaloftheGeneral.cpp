#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;//n elements in row
	vector<int> a(n);
	//save elements
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	//find max pos
	int max_pos=0;
	for(int i=0;i<n;i++){
		if(a[i]>a[max_pos]){
			max_pos=i;
		}
	}
	//find min_pos
	int min_pos=n-1;
	for(int i=n-2;i>=0;i--){
		if(a[i]<a[min_pos]){
			min_pos=i;
		}
	}
	//count of swaps
	int swap = max_pos+(n-1-min_pos);

	if(max_pos>min_pos){
		swap--;
	}

	cout<<swap<<endl;

	return 0;
}
