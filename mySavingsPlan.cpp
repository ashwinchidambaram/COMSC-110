//Objective: Calculate how much money to save every month for number of years before retirement and how much money you would have when you retire.
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
  // output my name and objective and program information
  cout << "Objective: calculate how much money to save every month for number of years before retirement and how much money would you have when you retire.\n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Variables
  string label1 = "In";
  string label2 = " years at ";
  string label3 = "%, $";
  string label4 = " deposited per month will grow to $";
  int deposit;
  double interestRate;
  int years;
  double amountSaved;
  int time;

  //Decalre variable values
  years = 10;
  deposit = 100;
  interestRate = 0.75;
  interestRate = interestRate/12
  time = years * 12;
  amountSaved = deposity * ((pow(1 + interestRate, time) - 1) - 1) / interestRate);
  interestRate = (interestRate * 100) * 12;

  //Ouput
  cout << label1 << years << label2 << interestRate << label3 << deposit << label4 << amountsaved << endl;
}