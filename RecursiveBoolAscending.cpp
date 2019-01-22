/*
 Created by: Michael Busslinger
 Using: Xcode
 Written in: C++ Language
*/

/*
 This program uses a recursive function to test for ascending order.

 The program will return "1" if the array is in ascending order.
 If it is not in ascending order, the program will return "0".
*/

#include <iostream>
#include <string>

using namespace std;

// Implement recursive function isAscending here
bool isAscending(int myarray[], int start, int end)
{
    bool status = true;

    if (myarray[start] != myarray[end])
    {
        if (myarray[start] > myarray[start+1])
        {
            //cout << myarray[start] << " " << myarray[start+1];            // Error Check for what's causing failure
            return status = false;
        }
        else
        {
            status = true;
            return isAscending(myarray, start+1, end);                      // This is the recursive part
        }
        
    }
    else
        status = true;
    
    return status;
}


// DO NOT CHANGE MAIN FUNCTION BELOW
int main() {
	int myarray[100];
	cout << "Enter number of integers : ";
	int n;
	cin >> n;
	cout << "Enter " << n << " integers" << endl;
	for (int i = 0; i < n; i++)
		cin >> myarray[i];
	cout << "Output of isAscending : " << isAscending(myarray, 0, n-1) << endl;
}
