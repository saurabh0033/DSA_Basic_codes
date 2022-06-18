#include <bits/stdc++.h>
using namespace std;
int Reverse(int a[], int s, int e, int N){
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
}
int main(){
    int T;
    cin>> T;
    while(T-->0){
        int N;
        cin>>N;
        int a[N];
        for(int i=0; i<N; i++){
            cin>>a[i];
        }
        int k;
        cin>>k;
        Reverse(a,0,k-2,N);
        Reverse(a,k-1,N-1,N);
        Reverse(a,0,N-1,N);
        for(int i=0; i<N; i++){
            cout<< a[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
