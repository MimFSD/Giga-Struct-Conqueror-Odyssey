#include<iostream>
using namespace std ;
int main(){
    int n = 17;
    bool isPrime = true;

    for (int i=2 ;i<=n-1;i++){       // i*i <=n
        if(n%i ==0){
            isPrime = false;
            break;
        }
    }

    if (isPrime==true)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Non-Prime Number" ;
    }
    
    
}