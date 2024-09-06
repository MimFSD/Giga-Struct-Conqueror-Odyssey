// Sum of Odd number using while loop

#include<iostream>
using namespace std ;
int main (){
    int n= 9 , oddSum=0;
    int i=1;
    while(i<=n){
        if (i%2 !=0){
           oddSum+=i;
        }
        i++; 
        
    }

    cout<<"Sum of Odd Numbers : " << oddSum;

}