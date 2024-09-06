// #include <iostream> 
// using namespace std; 
  
// int main() 
// { 

//     return 0; 
// }

#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int n=43 , sum =0 ;

    for(int i=1 ; i<=n; i++){
        sum+=i ;             //sum =sum+i
        // if(i==6){
        //     break;
        // }      
    }
    cout<< "sum is : " << sum << endl;
    return 0; 
}