#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    bool band=false;
    int arr[N];

    for(int i=1;i<N;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<N;i++){
        if(arr[i]>=M){
            cout<<i<<'\n';
            band=true;
            break;
        }
    }

    if(band!=true){
        cout << -1 << endl;
    }

    return 0;
}
