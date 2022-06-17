#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T-->0){
        int N;
        cin>>N;
        vector<int>v;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int k;
        cin>>k;
        sort(v.begin(),v.end());
        int Count=0,flag;
        for(int i=0; i<v.size(); i++){
            if(v[i]!=v[i+1]){
                Count++;
            }
            if(Count==k){
                cout<<v[N-k]<<endl;
                break;
            }
        }

    }
    return 0;
}
