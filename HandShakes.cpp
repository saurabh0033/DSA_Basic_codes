// write the program to calculate the maximum number of handshakes in room contain n number of people's

#include <bits/stdc++.h>
using namespace std;
int main (){
        int ans,n;
        cout<< "Enter the Number if the People's:";
        cin>>n;
        ans= (n*(n-1))/2;
        cout<< "Number of the Handshakes in room is:"<< ans<< endl;
        return 0;
}
