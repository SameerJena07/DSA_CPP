#include <iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    char op;
    cout << "Enter the Operation you want to perform: ";
    cin >> op;

    switch (op){

        case '+': cout << "The total sum value is = " << (a+b) << endl;
            break;

        case '-': cout << "The total sub value is = " << (a-b) << endl;
            break;

        case '*': cout << "The total multi value is = " << (a*b) << endl;
            break;
        
        case '/': cout << "The total div value is = " << (a/b) << endl;
            break;

        case '%': cout << "The total mod value is = " << (a%b) << endl;
            break;

        default: cout<< "This is deafult value" << endl;
    }


    return 0;
}