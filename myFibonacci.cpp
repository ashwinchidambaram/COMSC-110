// Objective: Get an nth term from the Fibonacci sequence
// Name: Ashwin Chidambaram
// Course: COMSC-110-1021
// Compiler: TDM MinGW
// Editor: MS NotePad

// Libraries
#include <iostream>
using namespace std;

// Programmer defined data types
// NONE

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string obj);

int fibonacciNumber(int t)
{
    // Data
    double t1;
    double t2;
    
    if(t == 0) // Set the zeroth term to 0 since it makes it easier to calculate the other terms
    {
        return t;
    } // if t = 0
  
    else if(t == 1) // Set the first term to 1 since it makes it easier to calculate the other terms
    { 
        return t;
    } // if t = 1
  
    else 
    { // Since the 0th term = 0 and the 1st term = 1 then we can find the 2 terms requred to find the nth number
        t1 = fibonacciNumber(t-1); // Get the number from the term before the one requested
        t2 = fibonacciNumber(t-2); // Get the number from 2 terms before the one requested
        t = t1 + t2; // Sum terms
        return t; // Set t = sum
    } // else
} // fibonacciNumber

// Main program
int main()
{
    //Data
    string objective = "Calculate a value in the Fibonacci number series ";
    double t = -1;
    double term;
    
    // Program introduction
    introduction(objective);
    
    // While loop to request valid input
    while(t <= 0)
    {
    cout << "Enter an index [0 or greater]: ";
    cin >> t;
    cin.ignore(1000, 10);
    term = t;
    } // while validation

    cout << "The Fibonacci number at index: " << term << " is " << fibonacciNumber(t) << endl;
} // main

// Introduction
void introduction(string obj) {
  cout << "Objective: ";
  cout << obj << endl;
  cout << "Programmer: Ashwin Chidambaram\n";
  cout << "Editor(s) used: Notepad\n";
  cout << "Compiler(s) used: TDM MinGW\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
}