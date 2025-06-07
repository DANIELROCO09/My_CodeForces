#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        vector <int>a(3);
        for(int i=0;i<3;i++){
            cin>>a[i];
        }

        if(a[0]<a[1] && a[1]<a[2]){
            cout<<"STAIR"<<endl;                                      }else if(a[0]<a[1] && a[1]>a[2]){
            cout<<"PEAK"<<endl;
        }else{
            cout<<"NONE"<<endl;
        }    
    }

    return 0;
}
