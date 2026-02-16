// #include<iostream>

// using namespace std;

// int main(){

//     // int num = 2;

//     int ch = '1';

//     cout << endl;

//     switch(ch){

//         case 1: cout << "First" << endl;
//             break;
        
//         case '1': cout << "Character 1" << endl;
//             break;
        
//         default: cout<< "It is a default case" << endl;
//     }

//     cout << endl;

//     return 0;
// }


/***/


#include<iostream>

using namespace std;

int main(){

    int num = 1;

    int ch = '1';

    cout << endl;

    switch(ch){

        case 1: cout << "First" << endl;
            break;
        
        case '1': switch (num){
            case 1: cout << "The value of num is: " << num << endl;
                break;
        }
        break;
        
        default: cout<< "It is a default case" << endl;
    }

    cout << endl;

    return 0;
}