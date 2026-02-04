
#include<iostream>
using namespace std;

// Print a number 1 to n
int main(){

/*    
    int n;
    cout <<"Enter a number: ";
    cin>>n;

    for (int i=1; i<=n; i++){
        cout << i << " ";
    }
*/

// OR //

    int n;
    cout <<"Enter a number: ";
    cin>>n;

    int i = 1;
    while (i<=n){
        cout<<i<<" ";
        i++;
    }
}