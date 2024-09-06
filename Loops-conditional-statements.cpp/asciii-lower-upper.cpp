#include <iostream> 
using namespace std; 

int main() 
{ 
    char ch ;
    cout << "Enter the Character : " ;
    cin>>ch;

    if (ch >= 65 &&  ch <= 90)  // ascii code --- A=65 ; Z=65
    {
        cout<< "Upper-case" ;
    }
    else
    {
        cout<<"lower-case";
    }
    
    


    return 0; 
} 