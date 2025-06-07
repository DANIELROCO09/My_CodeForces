#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>s;
    cin>>n;

    while(n--){
        string p;
        cin>>p;
        
        if(p.size()%s.size()){
            cout<<"No"<<endl;
        }else{
            string new_card;
            for(int i=0;i<p.size()/s.size();i++){
                new_card+=s;
            }
            if(p.size()==new_card.size()){
                cout<<"Yes"<<'\n';
            }else{
                cout<<"No"<<'\n';
            }
        }
    }

    return 0;
}
