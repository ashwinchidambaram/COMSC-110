//Objective: Converting Celsius to Fahrenheit
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iomanip>
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
  //open temps.txt for input
  ifstream fin;
  fin.open("temps.txt");
  if (!fin.good()) throw "I/O error";

  //output my name and objective and program information
  cout << "Objective: Converting Celsius to Fahrenheit.\n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  double c; // degrees Celsius 
  double f; // degrees Fahrenheit 

  //take input from temps.txt
  while(true) {
	if (!fin.good()) break; //Break when it hits the end
	fin >> c;
	fin.ignore(1000, 10);
	
	if(c == -999) { //sentinel value
	  break;
	}

	f = double((1.8) * c) + 32; //Temp calculation 
	
	//Output
        cout << c << " Celsius equals ";

	//format output
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(1);
	cout << f << " degrees Fahrenheit" << endl;
  }

fin.close();

}