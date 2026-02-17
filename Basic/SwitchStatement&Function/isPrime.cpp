#include <iostream>

using namespace std;

// 1 -> prime no
// 0 -> Not a prime number

bool isPrime(int n){

    for (int i=2; i<n; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if(isPrime(n)){
        cout << "IT IS A PRIME NUMBER" << endl;
    }
    else {
        cout << "IT IS NOT A PRIME NUMBER" << endl;
    }


    return 0;

}