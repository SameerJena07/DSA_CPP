#include <iostream>
using namespace std;

int main(){
    // int total;
    // cout << "Enter the total money: ";
    // cin >> total;

    // int type;
    // cout << "Enter type of money: ";
    // cin >> type;

    // switch (type){
    //     case 100: cout << "total 100 rupees note: " << (total/type) << endl;
    //         break;

    //     case 50: cout << "total 100 rupees note: " << (total/type) << endl;
    //         break;

    //     case 20: cout << "total 100 rupees note: " << (total/type) << endl;
    //         break;

    //     case 1: cout << "total 100 rupees note: " << (total/type) << endl;
    //         break;

    //     default: cout << "This is default case" << endl;
    // }

    int rest_balance=1330;
    int aval_balance=0;
    
    // int type;
    // cout << "Enter the type:";
    // cin>>type;
    
    
    switch(1) {
        case 1:
    aval_balance = rest_balance / 100;
    rest_balance = rest_balance % 100;
    cout << aval_balance << " * 100" << endl;

case 2:
    aval_balance = rest_balance / 50;
    rest_balance = rest_balance % 50;
    cout << aval_balance << " * 50" << endl;

case 3:
    aval_balance = rest_balance / 20;
    rest_balance = rest_balance % 20;
    cout << aval_balance << " * 20" << endl;

case 4:
    aval_balance = rest_balance / 10;
    rest_balance = rest_balance % 10;
    cout << aval_balance << " * 10" << endl;
    cout << "Remaining: " << rest_balance;

                
default:
            cout << "Invalid type entered";

    }
      
}