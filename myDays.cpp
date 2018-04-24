//Objective: Calculate how many days old I am
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
  //Output my name and objective and program information
  cout << "Objective: Calculate age in days.\n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  int yearsLived = 18; 
  int leapYear = 5;
  int daysBeforeBirth = 295;
  int daysAfterAssignment = 192;
  int daysBeforeAssignment = 0;
  int days = 0;

  //Calculate days lived till this year's birhtday
  days = (yearsLived + 1) * 365;

  //Caluclate days until the assignment is due from beginnning of the year
  daysBeforeAssignment = 365 - daysAfterAssignment;

  //Calculate total number of days
  days = days - (daysBeforeBirth - daysBeforeAssignment) + leapYear;

  //Output
  cout << "DOB: October 23, 1998 " << "\n";
  cout << "Due: June 22, 2017" << "\n";
  cout << "Age in Days: " << days << " days" << "\n";

}//main