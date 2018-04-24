//Objective: Converting Fahrenheit To Celsius
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream> 
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
  //output my name and objective and program information
  cout << "Objective: Convert Fahrenheit To Celsius.\n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  double c; // degrees Celsius 
  double f; // degrees Fahrenheit 

  //User Input
  cout << "Enter the temperature in degrees Fahrenheit: "; 
  cin >> f; 

  //Temperature conversion
  c = 5 * (f - 32) / 9; 

  //Output results
  cout << " That's " << c << " degrees Celsius!" << endl; 

}//main