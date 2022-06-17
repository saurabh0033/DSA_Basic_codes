// Write A program to find out number of days in given months
#include <bits/stdc++.h>
using namespace std;
int main(){
    int leap[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int simple[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y,m;
    cout<< "Enter the Year:";
    cin>>y;
    cout<< "Enter the month:";
    cin>>m;
    if(y%4==0 || y%400==0){
        cout<< leap[m-1]<<endl;
    }
    else{
        cout<< simple[m-1]<<endl;
    }
    return 0;
}
