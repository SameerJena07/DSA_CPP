#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i = 0; i<n; i++){
        char ch = 'A' + i;
        for (int j = 0; j<n; j++){
            char m=ch+j;
            cout<<m<<" ";
        }
        cout<<endl;
    }
}