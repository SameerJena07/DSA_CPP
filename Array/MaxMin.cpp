#include <iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n){

    int min = INT_MAX;

    for (int i = 0; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }

    return min;
}


int getMax(int num[], int n){

    int max = INT_MIN;

    for (int i = 0; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }

    return max;
}


int main(){

    int num[] = {1,2,3};


    cout << "Maximum value is " << getMax(num, 3) << endl;

    cout << "Minimum value is " << getMin(num, 3) << endl;

    return 0;

}