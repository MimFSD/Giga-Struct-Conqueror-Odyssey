#include<iostream>
using namespace std;
// sum of 2 numbers 
int sum(int a ,int b){
    int s = a + b;
    return s;
}

// Minium of 2 numbers
int minOf2Numbers(int p ,int q){   //parameters
    if (p<q){
        return p;
    }
     else{
        return q ;
    }
}
int main(){
    cout<< sum(45,35) << endl ;
    cout<< minOf2Numbers(754,369) << endl;  //arguments
    return 0 ;
}