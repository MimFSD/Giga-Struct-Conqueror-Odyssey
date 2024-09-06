#include <iostream> 
using namespace std; 

int main() 
{ 
    char ch ;
    cout << "Enter the Character : " ;
    cin>>ch;

    if ('a'< ch && 'z'> ch)
    {
        cout<< "lower-case" ;
    }
    else
    {
        cout<<"Upper-case" ;
    }
    
    


    return 0; 
} 