#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout <<" Enter Your Two Numbers: ";
 cin >> a >> b;
    if(a%2==0 && b%2==0){
        cout << "Both numbers are even." << endl;
    } else if(a%2!=0 && b%2!=0) {
        cout << "Both numbers are odd." << endl;
    } else {
        cout << "One number is odd and the other is even." << endl;
    }
return 0;
}3