#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    for( char i='A';i<=ch;i++){
        for(char j='A';j<=ch;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
}