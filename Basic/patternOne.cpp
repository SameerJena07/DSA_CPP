#include <iostream>
using namespace std;

int main(){

    // ** Print pattern ** //
/*
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= n){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        
        i = i + 1;
    }
*/


    // ** Print 111, 222, 333 **//
/*
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;

    while (i <= n){
        int j = 1;
        while (j <= n){
            cout<<i;
            j = j + 1;
        }
        cout<<endl;

        i = i+1;
    }
*/

    // ** print 1234, 1234, 1234, 1234** //
/*
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout<<n-j+1 <<" ";
            j = j + 1;
        }
        cout<<endl;

        i = i+1;
    }
*/



    //* print 123, 456, 789 *//
/*
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count <<" ";
            count = count + 1;
            j++;
        }
        cout<<endl;

        i = i + 1;
    }
*/



    //* Print a Triangle *//
/*
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;

        row = row + 1;
        
    }
*/


    //* Print another triangle with equal row number value*//

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout<<row;
            col = col + 1;
        }
        cout<<endl;
        
        row = row+ 1;
    }
    

}