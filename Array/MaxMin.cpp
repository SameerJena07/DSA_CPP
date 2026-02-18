#include <iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n){

    int mini = INT_MAX;

    for (int i = 0; i<n; i++){

        mini = min(mini, num[i]);

        // if(num[i] < min){
        //     min = num[i];
        // }
    }

    return mini;
}


int getMax(int num[], int n){

    int maxi = INT_MIN;

    for (int i = 0; i<n; i++){

        maxi = max(maxi, num[i]);

        // if(num[i] > max){
        //     max = num[i];
        // }
    }

    return maxi;
}


int main(){

    int num[] = {1,2,3};


    cout << "Maximum value is " << getMax(num, 3) << endl;

    cout << "Minimum value is " << getMin(num, 3) << endl;

    return 0;

}