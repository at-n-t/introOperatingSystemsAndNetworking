// Anh Truong
#include <iostream>
using namespace std;

int main(){
    // Declaring variable myInt with value 15
    // Declaring variable myPointer using (*) and assigning it to memory location of myInt
    int myInt = 15;
    int * myPointer = &myInt;
  
    // Printing memory location of myInt and value of myPointer
    cout << *myPointer << endl;
    cout << &myPointer << endl;
    
    // Changing value of myInt to 10
    myInt = 10;
    
    // Printing memory location of myInt and value of myPointer
    cout << *myPointer << endl;
    cout << &myPointer << endl;
}