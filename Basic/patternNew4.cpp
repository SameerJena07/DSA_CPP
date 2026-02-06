#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // for (int i = 1; i <= n; i++){
    //     char ch = 'A';
    //     for (int j=1; j<=i; j++){
    //         char m = ch;
    //         cout<<m;

    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }

    int i = 1;
    char ch = 'A';

    while (i<=n){
        int j = 1;
        while(j<=i){
            cout<<ch;

            
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
}