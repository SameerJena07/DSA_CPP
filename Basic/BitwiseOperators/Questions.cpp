// Question 1
/*
#include <iostream>
using namespace std;

int main(){
    int a, b = 1;

    a = 10;
    if (++a)
        cout << b;
    else 
        cout << ++b;
}

    //Output: 1;
*/    


// Question 2

/*
#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;

    if (a-- > 0 && ++b > 2){
        cout << "Stage1 - Inside If ";
    } else {
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;
}
*/


// Question 3

/*
#include <iostream>
using namespace std;

int main(){
    int number = 3;
    cout << (25 * (++number) );
}
*/


// Question 4

/*
#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b <<endl;
    cout << c <<endl;
}
*/


// Question 5

#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;

    if (a-- > 0 || ++b > 2){
        cout << "Stage1 - Inside If ";
    } else {
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;
}