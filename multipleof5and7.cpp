#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%5==0 && i%7==0){
            cout<<i<<" ";
            ;
        }
    }
}