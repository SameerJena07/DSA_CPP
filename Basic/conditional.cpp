#include <iostream>
using namespace std;

int main(){

/*
    int A, B;
    
    cout<<"Enter a value of A: ";
    cin>>A;
    cout<<"Enter anumber for B: ";
    cin>>B;

    if (A > B){
        cout << "A is greater than B"<<endl;
    }
    else if (A == B){
        cout << "A is equal to B"<<endl;
    } else {
        cout << "B is graeter than A"<<endl;
    }
*/

    // int a,b;
    // a = cin.get();
    // cout<<"Value of a is : "<< a <<endl;

/*
    //Find +ve, -ve and Zero
    int a;

    cout<< "Enter the value of a: ";
    cin>>a;

    if(a > 0){
        cout<< "This is +ve";
    }
    else {
        if (a < 0){
            cout<<"This is -ve";
        } else {
            cout<<"This is Zero";
        }
    }
*/

/*
    int a = 2;
    int b = a+1;

    if ((a=3) == b){
        cout<<a;
    } else{
        cout<<a+1;
    }
*/

    //upper ,lower and numeric value

    char ch;

    cout<<"Enter a character: ";
    cin>>ch;

    if (ch >= 'A' && ch <= 'Z'){
        cout<< "This is UpperCase";
    }
    else if (ch >= 'a' && ch <= 'z'){
        cout<< "This is LowerCase";
    }
    else if (ch >= '0' && ch <= '9'){
        cout<< "This is Numeric Value";
    }
    else {
        cout<<"special Chracter";
    }

    return 0;

} 

