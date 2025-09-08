#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<" Enter Your Character:";
    cin>>ch;
    if(ch>='a' && ch<='z') {
        cout<<" the character is lowercase."<<endl;
    } else if(ch>='A' && ch<='Z') {
        cout<<" the character is uppercase."<<endl;
    } else {
        cout<<" the character is not an alphabet."<<endl;
    }
        return 0;
    }