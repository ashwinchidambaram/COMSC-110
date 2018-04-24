//Objective: Calculate the Area of a Circle
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream> 
#include <cmath> 
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
  // output my name and objective and program information
  cout << "Objective: Enter program objective.\n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  double r; 
  double area; 
  double pi = 4 * atan(1.0); // 4 times the angle whose tangent is 1 

  //User input
  cout << "Enter the radius of a circle: "; 
  cin >> r; 

  //Area Calculation
  area = pi * r * r; 

  //Ouput results
  cout << " The area is " << area << endl; 

}//main