#include<iostream>
using namespace std;
int main() {
    int a, b,c,d,e;
    cout<<"Enter your marks in maths:";
    cin>>a;
    cout<<"Enter your marks in physics:";
    cin>>b;
    cout<<"Enter your marks in chemistry:";
    cin>>c; 
    cout<<"Enter your marks in english:";   
    cin>>d;
    cout<<"Enter your marks in computer science:";
    cin>>e;
    float total= a+b+c+d+e;
    cout<<"Your total marks are:"<<total<<endl;
    float percentage=(total/5);
    cout<<"YOur percentage is:"<<percentage<<"%"<<endl;
    if(percentage>=90){
        cout<<"you got A+ grade\n";
    } else if(percentage>=80 && percentage<90){
        cout<<"you got A grade\n";
    } 
    else if(percentage>=70 && percentage<80){
        cout<<"you got B grade\n";
    } 
    else if(percentage>=60 && percentage<70){
        cout<<"you got C grade\n";
    } 
    else if(percentage>=50 && percentage<60){
        cout<<"you got D grade\n";
    } 
    else {
        cout<<"you got F grade\n";
    }
   

    

    return 0;
}