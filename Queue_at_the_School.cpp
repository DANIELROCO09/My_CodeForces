#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    for(int time=0;time<t;time++){
        for(int j=0;j<n-1;j++){
            if(s[j]=='B' && s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }

    cout<<s;
}
