#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter a number :";
    cin>>day;
    switch(day){
        case 1:
        cout<<"It's Monday";
        break;
        case 2:
        cout<<"It's Tuesday";
        break;
        case 3:
        cout<<"It's Wednesday";
        break;
        case 4:   
        cout<<"It's Thursday";
        break;
        case 5:
        cout<<"It's Friday";
        break;
        case 6:
        cout<<"It's Saturday";
            break;    
        case 7:
        cout<<"It's Sunday";
        break;
        default:
        cout<<"invalid input";
    }
    return 0;
}