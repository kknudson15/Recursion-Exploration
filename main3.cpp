/* 
Kyle Knudson
CSCI 591
cs301188
due: 1/23/18
This file contains the third recursive function of the project and the corresponding main
function.  This function takes in a user inputed value and prints out the prime factorization 
of the number that the user inputs.  The function prints out the user inputed value, if that is
the smallest prime number.  The recursive function calls a second function that finds the smallest
prime factor of the number.  
*/

#include <iostream>
using namespace std;


void primeFact(int);
int smallestPrime(int);

int main()
{
	int num;

    cout << "Enter a positive integer" << endl;
    cin >> num;
	cout << "The prime factorization is: ";
    primeFact(num);
	
	
}


void primeFact(int n)
//pre-condition:  THe function must be passed a non negative integer n.
//post condition:  The function prints out the prime factorization of the number that the user enters.
//base case: n is the smallest prime factor of itself.
{
    int small = smallestPrime(n);
    if (n == small)
        cout << n;
    else   
        {
            cout << small << " ";
            primeFact(n/small);
        }
	cout << endl;
        
}

int smallestPrime(int n)
//pre condition:  The function must be passed a non negative integer n
//post condition: The function returns the smallest prime factor of n.
{
    for (int i=2; i <=n; i++)
    {
        if(n%i == 0)
            return i;
    }
}