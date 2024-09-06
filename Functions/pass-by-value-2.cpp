#include<iostream>
using namespace std;
int Star(int a, int b){
    a=a+7;  //12
    b=b+3; //11
    return a+b ;  //23
}
int main (){
    int a =5 ,b=8 ;
    cout<<Star(a,b)<<endl;

    cout<<a<<endl;  //5
    cout<<b<<endl;  //4

    return 0 ;
}