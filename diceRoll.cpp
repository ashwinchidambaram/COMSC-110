//Objective: Simulate a Dice Roll
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Initialize random number generator
  srand(time(0));
  rand();

  //Introduction
  cout << "Objective: Simulate a dice roll.\n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  int a; // the name of the first die 
  int b; // the name of the second die 
  int total; // the result 

  //Simulate Dice Roll
  a = 1 + rand() % 6; 
  b = 1 + rand() % 6; 
  total = a + b; 

  // Output results
  cout << "Dice result: " << total << " (" << a << " and " << b << ")" << endl; 

}//main
