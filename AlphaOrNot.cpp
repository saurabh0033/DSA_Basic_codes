#include <bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cout<< "Check whether Alpha or Not"<<endl;
    cout << "Enter Here:";
    cin>> x;
    if((x>='A'&& x<='Z') || (x>='a' && x<='z')){
        cout<< "It is Alphabet"<<endl;
    }
    else{
        cout<< "Not Alphabet"<<endl;
    }
    return 0;
}
