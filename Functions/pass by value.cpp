//pass by value
// copy of argument is passed to function

#include<iostream>
using namespace std;
int sky(int c, int d){  //here store the value -- c=x=5 , d=y=7
    return c+d;
}
int main (){
    int x= 5 ,y=7;
    cout<<sky(x,y)<< endl ;


    return 0 ;
}