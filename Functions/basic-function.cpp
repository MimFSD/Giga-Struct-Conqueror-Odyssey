// A function is a block of code which only runs when it is called.

#include<iostream>
using namespace std ;

void spell(){
    cout<<"Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times. \n" ;
}

int win503(){
    cout<<"Data Structure & Algorithm \n" ;
    return 7 ;
}

int main(){
    spell() ; 
    win503();
    spell();
    win503();

    int value = win503();
    cout<<"Value of Return : "<< value << endl;

    return 0;
}