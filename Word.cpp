#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>>word;
    int up=0,low=0;

    for(char c:word){
        if(isupper(c)){
            up++;
        }else{
            low++;
        }
    }

    if(up>low){
        for(char &c:word){
            c=toupper(c);
        }
    }else{
        for(char &c:word){
            c=tolower(c);
        }
    }

    cout<<word<<'\n';

    return 0;
}
