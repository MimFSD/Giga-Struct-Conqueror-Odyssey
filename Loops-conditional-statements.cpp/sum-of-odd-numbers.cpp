#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int n=50;
    int Dorsum = 0 ;

   for(int i=1;i<=n;i++){
       if(i%2 != 0){
        Dorsum += i;
       }
    
    }
    
    

cout<<Dorsum<<endl;
    return 0; 
}