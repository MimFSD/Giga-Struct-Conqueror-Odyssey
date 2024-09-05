#include <iostream> 

using namespace std; 

int main() 
{ 
	int x = 5; 

	// Increment Operator (++) 
	cout << "Initial value of x: " << x << endl; 
	x++; // Increment x by 1 
	cout << "After x++, x is now: " << x << endl; 

	// Prefix and Postfix Increment/Decrement 
	int a = 10; 
	int b, c; 

	b = ++a; // Prefix increment: first, increment a, then 
			// assign to b 
	c = a++; // Postfix increment: first, assign a to c, 
			// then increment a 

	cout << "a: " << a << ", b: " << b << ", c: " << c 
		<< endl; 

	return 0; 
}
