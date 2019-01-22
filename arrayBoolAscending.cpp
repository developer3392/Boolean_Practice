/*
 Created by: Michael Busslinger
 Using: Xcode
 Written in: C++ Language
*/


/*
            The purpose of this code is to test my understanding of how to print
            arrays using a void function for any sized array using the function:
 
 void printArray()...
 
            Then, I create a boolean function to determine if the array given
            is in ascending order. If it is, the program will return TRUE and
            display a 1. If it is NOT, the program will return FALSE and display
            a 0 at the end. This is all done in the function:
 
 bool isAscending()...
 
 
*/

#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
}

// Implement isAscending here
bool isAscending(int myarray[], int n)
{
    bool status = true;
    for (int i = 0; i < n; i++)
    {
        if (myarray[i] > myarray[i+1] && i != n-1)
        {
            status = false;         // Returns 0
        }
    }
    return status;
}

// DO NOT WRITE ANY CODE BELOW THIS LINE (EXCEPT FOR TESTING)
int main() {
	int myarray[100];
	cout << "Enter number of integers : ";
	int n;
	cin >> n;
	cout << "Enter " << n << " integers" << endl;
	for (int i = 0; i < n; i++)
		cin >> myarray[i];
	cout << "Contents of array : ";
	printArray(myarray, n);
	cout << "Output of isAscending: " << isAscending(myarray, n) << endl;
}
