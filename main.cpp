/* 
Kyle Knudson
CSCI 591
cs301188
due: 1/23/18
This file is the first recursive function of the product and the corresponding main function to 
go along with it.  This function reads in an integer from the user and sums up the digits of the
number that the user inputed.  The function sumprint does a function call to itself( a hallmark of
a recursive function) if the number that the user inputs is larger than 10, i.e. it has more than 
one digit.
*/


#include <iostream>
using namespace std;

int sumprint(int);

main()
{
    int digit;

    cout << "Enter an integer: " << endl;
    cin >> digit; 
	cout << " The sum of the digits is: " << sumprint(digit) << endl;



}

int sumprint(int n)
//pre-conditon: N must be a non negative integer.
//post condition: sumprint returns an integer that represents the sum of the digits
// that is passed to the function as n.
//Base case: The number entered by the user is less than 10(it is a single digit).
{
    if (n<10)
	{
		return n;
	}
    else
        {
            return sumprint(n/10) + (n%10);
            
        }
		
     
}
