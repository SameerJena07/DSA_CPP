#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    cout << "printing the array" << endl;
    //print the array
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";    
    }

    cout << "Printing Done" << endl;


}

int main() {

    //declare
    int number[15];

    //accessing an array
    cout << "Value at 14 index " << number[14] << endl;

    // cout << "Value at 20 index " << number[20] << endl;

    //Initializing an array
    int second[3] = {5, 7, 11};

    //accessing an element
    cout << "Value at 2 index " << second[2] << endl;


    int third[15] = {2, 7};

    int n = 15;
    printArray(third, 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout << "size of third is " << thirdSize << endl;

    cout << endl;

    //Initialize all location with zero
    int fourth[10] = {0};

    n = 10;
    printArray(fourth, 10);


    cout << endl;

    
    int fifth[10] = {1};

    n = 10;
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "size of Fifth is " << fifthSize << endl;


    cout << endl << "Everything is fine" << endl << endl;

    return 0;
}