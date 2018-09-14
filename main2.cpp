/* 
Kyle Knudson
CSCI 591
cs301188
due: 1/23/18
This file is the second recursive function of the project and the corresponding main function.  
This function takes in two integer values as the endpoints of a range of numbers.  The function
then returns the sum of the range to the main function, where it is outputed.  The function does 
a recursive call if low and high are not the same value.  
*/

#include <iostream>
using namespace std;


int rangeSum(int, int);

int main()
{
	int low,high;
		
    cout << "Enter two integers, the first smaller than the second: " << endl;
    cin >> low >> high;
    cout << "The sum of the integers from "<< low << " to " << high << " is: " <<  rangeSum(low, high) << endl;
}


int rangeSum (int l, int h)
//pre-condition: two integers must be passed to the function with the first one l being 
// the smaller of the two.  
//post-condition: The function returns the sum of the range of integers between the two values
//that are passed to the function.
//Base case: the two numbers entered by the user are the same value.
{
    if (l==h)
        return l;
    else
        return rangeSum(l, h-1) + h;
}
