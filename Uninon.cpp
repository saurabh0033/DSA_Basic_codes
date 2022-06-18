#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> s;
        vector<int> v;
        for(int i=0; i<n; i++) {
            s.insert(a[i]);
        }
        for(int i=0; i<m; i++) {
            s.insert(b[i]);
        }
        for(auto i : s) {
            v.push_back(i);
        }
        return v.size();
    }
int main(){
   int T;
    cin>>T;
    while(T-->0){
        int N,M;
        cin>>N>>M;
        int arr1[N],arr2[M];
        for(int i=0; i<N; i++){
            cin>>arr1[i];
        }
         for(int i=0; i<M; i++){
            cin>>arr2[i];
        }

        cout<< doUnion(arr1,N,arr2,M)<<endl;
}
return 0;
}
