#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	string nums;
	for(auto x:a){
		if(x!='+'){
			nums+=x;
		}
	}
	
	sort(nums.begin(),nums.end());
	string result;
	for(int i=0;i<nums.size();i++){
		result+=nums[i];
		if(i != nums.size() - 1) {
            		result += '+';
        	}
	}
	cout<<result<<'\n';
	return 0;
}
