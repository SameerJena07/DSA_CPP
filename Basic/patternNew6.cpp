#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i = 1;
    char ch = 'A';

    while (i<=n){
        int j = 1;
        while (j<=i){
            char value = ch-1+j;
            cout<<value;

            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }

}