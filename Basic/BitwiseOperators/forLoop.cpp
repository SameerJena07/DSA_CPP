/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the value of n: ";
    cin>>n;

    cout << "printing count from 1 to n" << endl;

    int i = 1;
    for (; ;){
        if (i <= n){
            cout << i << endl;
        } else {
            break;
        }
        i++;
    }
}
    */


#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "printing count from 1 to n" << endl;

    for (int a = 0, b = 1, c=2 ; a>=0 && b<=1 && c<=2; a--, b--, c--){
        cout<< a << " " << b << " " << c <<endl; 
    }
}