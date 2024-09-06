#include<iostream>
using namespace std;
int fMemory(int g,int h){
    return g+h;
}
int rMemo(int v,int w){
    return v/w;
}
int main (){
    cout<<fMemory(23,34)<<endl;
    cout<<rMemo(72,6)<<endl;

    return 0 ;
}