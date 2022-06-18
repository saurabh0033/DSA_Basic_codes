#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T-->0){
        int N;
        cin>>N;
        vector<int>a;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }


        sort(a.begin(),a.end());

        for(int i=0; i<N; i++){
            cout<< a[i]<< " ";
        }
    }
    return 0;
}
