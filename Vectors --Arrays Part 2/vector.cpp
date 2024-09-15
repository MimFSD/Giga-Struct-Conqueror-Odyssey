// Vectors like array  -->  Dynamic 
//In array , Size Fixed
// In vectors,  Not fixed Size  -- Size can changed
// Standard Template Library (STL)


#include <iostream>
#include<vector>
using namespace std ;
int main (){
// vector <int> vec  ;    // 0
// cout <<vec[0] ;  //nothing show because empty vector

vector <int> ver={7,5,9};
cout<<ver[0] << endl;

vector <int> vec (5,13);
cout<<vec[0]  <<endl ;
cout<<vec[1] <<endl;
cout<<vec[2] <<endl;
cout<<vec[3] <<endl;
cout<<vec[4] <<endl;
    return 0;
}