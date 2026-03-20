//CSCI 115(04)
// Ritvik Mahapatra, 301894867
// Lab-2, Part-3, Implementing a iterative fibonacci

#include <iostream>

using namespace std;

void Fib(int x, int* result) //defining the Fiboacci function
{
	int a = 0, b = 1, c = 0; //defining the first, second and third element for the series
	if (x == 0) // checking the first condition, if first element is required
	{
		*result = a;
	}
	else if (x == 1) // checking if the second element is required
	{
		*result = b;
	}
	for (int i = 1; i < x; i++) // now iterating to get the xth value in the fibonacci series
	{
		*result = a + b; // the result is always the sum of two preceeding elements
		a = b; // setting the new value of a for next itreation
		b = *result; // setting the new value of b
	}
}
int main()
{
	int x = 10; // declaring the required value of n
	int result; 
	Fib(x, &result); // calling the function Fib using the value of X and result via call by reference (where the modified of result in the function affects the value of result varaible in the main function
	cout << result << endl; // output
	return 0;
}