#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T-->0){
        int N;
        cin>>N;
        vector<int>Arr;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        cout<< *min_element(Arr.begin(), Arr.end());
        cout<<endl;
        cout<< *max_element(Arr.begin(), Arr.end());

    }
    return 0;
}
