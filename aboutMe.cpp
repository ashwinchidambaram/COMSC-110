//Objective: Talk about myself
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
  cout << "Objective: Talk about myself.\n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  int luckyNumber = 4; //declare variable to store lucky number
  double amountEarned = 900000; //declare variable to store money I want to save
  string movie = "Kimi no na Wa"; //declare variable to store name of fav movie
  char initial = 'A'; //declare variable to store an inital in my name

  //Output variables
  cout << "My favorite number is " << luckyNumber << "\n";
  cout << "I want to save $" << amountEarned << " for the rest of my life" << "\n";
  cout << "My favorite movie is " << movie << "\n";
  cout << "The first inital of my name is " << initial << "\n";


}//main