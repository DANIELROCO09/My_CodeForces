#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        bool same=true;
        for(int i=0;i<n;i++){
            char c1=s1[i];
            char c2=s2[i];
            if(c1!=c2){
                if((c1=='G'&&c2=='B')||(c1=='B'&&c2=='G')){
                    continue;
                }else{
                    same=false;
                    break;
                }
            }
        }
        cout<<(same?"YES":"NO")<<endl;
    }
    return 0;
}
