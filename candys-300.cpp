#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int n; cin>>n;
        if(n==0) break;

        vector<int> prices(n);
        for(int i=0;i<n;i++){
            cin>>prices[i];
        }
        int total=0;
        for(int price:prices){
            if(total+price<=300){
                total+=price;
            }
        }
        cout<<total<<endl;

    }



    return 0;
}