//Objective: Objective: From how far away can a boat see a lighthouse while at sea?
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//Libraries
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
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
  //Output my name and objective and program information
  cout << "Objective: Determine the distance a lighthose can be seen from while a boat is at sea \n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Variables
  double height;
  double distance;

  //Request input from user and set var values
  cout << "How tall is the lighthouse in feet??" << endl;
  cin >> height;
  
  distance = (sqrt (0.8 * height));

  //Ouput
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(0);
  cout << "A " << height << " foot tall lighthouse can be seen from " << distance << " away" << endl;
  
}