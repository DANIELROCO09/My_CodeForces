#include<bits/stdc++.h>
using namespace std;

int main(){
    string B;
    cin>>B;
    string D="";
    int i=0;
    while(i<B.length()){
        if(B[i]=='.'){
            D+='0';
            i++;
        }else if(B[i]=='-'){
            if(i+1<B.length()&&B[i+1]=='-'){
                D+='2';
                i+=2;
            }else{
                D+='1';
                i+=2;
            }
        }
    }
    cout<<D;
}
