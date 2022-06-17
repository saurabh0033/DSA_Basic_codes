#include <bits/stdc++.h>
using namespace std;

int main(){
    char a;
    cout<< "Program to check whether the character is vowel or constant "<<endl;
    cout<< "Enter the Character:";
    cin>>a;
    if(a=='A'|| a=='E' || a=='I' || a=='O'|| a=='U' || a=='a'|| a=='e' || a=='i' || a=='o'|| a=='u'){
        cout<< "It is Vowel"<<endl;
    }
    else if(!(a>'A' && a<'Z' || a>'a' && a<'z')){
        cout<< "Invalid Input"<<endl;
    }
    else{
        cout<< "constant"<< endl;
    }
    return 0;
}
