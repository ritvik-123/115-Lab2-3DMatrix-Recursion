//CSCI 115(04)
// Ritvik Mahapatra, 301894867
// Lab-2, Part-0, Implementing a NxMxL

#include <iostream>
#include <cstdlib>

using namespace std;

class ThreeDArray // Defining the class
{
public:
	int* Arr; // Defining the array pointer
	// we will define the 3d array as 1d array of size n*m*l and implement logic to access each of its element as if its a 3D array (thus using a single pointer only)
	ThreeDArray(int n, int m, int l):Arr (new int[n * m * l]) // defining the constructor with the 3D Array (class member) initialisation with the dimensions provided by the user
	{
		for (int length = 0; length < n; length++)
		{
			for (int breadth = 0; breadth < m; breadth++)
			{
				for (int depth = 0; depth < l; depth++)
				{
					Arr[length * m * l+ breadth * l + depth] = length + breadth + depth; // allocating the array using three loops
				}
			}
		}
	}
	void Disp3DArr(int n, int m, int l) // function to display the 3D array of the dimensions n,m,l
	{
		for (int length = 0; length < n; length++)
		{
			for (int breadth = 0; breadth < m; breadth++)
			{
				for (int depth = 0; depth < l; depth++)
				{
					cout <<"The element X:"<< length <<" Y:" << breadth <<" Z:" << depth <<" is:" << Arr[length * m * l + breadth * l + depth]<< endl;
				}
			}
		}
	}
	~ThreeDArray() // deconstructor to deallocate the array memory
	{
		delete[] Arr;
	}
};
int main()
{
	int N, M, L; // defining the dimensions that the 3D array will take
	N = 4;
	M = 5;
	L = 6; // defining their values
 	ThreeDArray Arr1(N, M, L); // creating the object which also automatically allocates the array elements
	Arr1.Disp3DArr(N, M, L); // calling the memeber function to display the 3d array
	return 0;
}