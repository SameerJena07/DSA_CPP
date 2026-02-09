
// Question No - 1 //
/*
#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i<=5; i++){
        cout << i << " ";
        i++;
    }
}
*/      //output = 0 2 4 



// Question No - 2 //

/*
#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i<=5; i--){
        cout << i << " ";
        i++;
    }
} 
*/       //output - Infinite 0



// Question No - 3 //

/*
#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i<=15; i += 2){
        cout << i << " ";
        
        if (i&1){
            continue;
        }
        i++;
    }
} 
*/   //Output = 0 3 5 7 9 11 13 15



// Question No - 4 //

/*
#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i<5; i++){
        for (int j = 1; j <= 5; j++){
            cout << i << " " << j <<endl; 
        }
    }
} 
*/ 


// Question No - 5 //


#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i<5; i++){
        for (int j = 1; j <= 5; j++){
            if (i+j == 10){
                break;
            }
            cout << i << " " << j <<endl; 
        }
    }
} 