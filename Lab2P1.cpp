//CSCI 115(04)
// Ritvik Mahapatra, 301894867
// Lab-2, Part-1, Implementing a iterative and recursive to compute different functions

#include <iostream>
#include <math.h>

using namespace std;

int f1_iter(int i1 = 0, int i2 = 100) // first calculating function f1 iteratively
{
	int result = 0;
	for (int iterf1 = i1; iterf1 <= i2; iterf1++)
	{
		result = result + 2 * iterf1 + 9; // implementing the function

	}
	return result; 
}
int f1_recur(int i1 = 0, int i2 = 100) // now dealing with the same function f1 recursively
{
	if (i1 < i2) // continuing condition where i1 has to be less than i2 (max value of i)
	{
		return 2 * i1 + 9 + f1_recur(i1 + 1, i2); // implementing the function and recursively calling the f1 function to calculate for next elements
	}
	else // stopping condition
	{
		return 2 * i1 + 9; // the last value calculation
	}
}
long double f2_iter(int i1 = 1, int i2 = 100) //function f2 iteratively
{
	long double result_f2 = 1; //using long double as the value is beyond the range of int and long (-2147483648 and -9223372036854775808 respectively)
	for (int iterf2 = i1; iterf2 <= i2; iterf2++) 
	{
		result_f2 = result_f2 * (5 * pow(iterf2, 3) + pow(iterf2, 2)); // calculating the function and multiplying it with the result to get the final result
	}
	return result_f2;
}
long double f2_recur(int i1 = 1, int i2 = 100) // function f2 recursively
{
	if (i1 < i2)
	{
		return (5 * pow(i1, 3) + pow(i1, 2)) * f2_recur(i1 + 1, i2);
	}
	else if (i1 == i2)
	{
		return (5 * pow(i1, 3) + pow(i1, 2));
	}
}
float f3_iter(int i1 = 0, int i2 = 500)
{
	float result = 0;
	for (int iterf3 = i1; iterf3 <= i2; iterf3++)
	{
		result = result + 1 / (sqrt(5 * iterf3));
	}
	return result;
}
float f3_recur(int i1 = 0, int i2 = 500)
{
	if (i1 < i2)
	{
		return 1 / (sqrt(5 * i1)) + f3_recur(i1 + 1, i2);
	}
	else if (i1 == i2)
	{
		return 1 / (sqrt(5 * i1));
	}
}
int main()
{
	cout << f1_iter() << endl << f1_recur() << endl << f2_iter() << endl << f2_recur() << endl << f3_iter() << endl << f3_recur() << endl;
	return 0;
}