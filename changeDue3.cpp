//Objective: Calculate change due in a transaction using these U.S. bills – no cents: $1, $2, $5, $10, $20, $50, $100, $500, $1000, $5000, $10000, and $100000 bills.
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
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
  //open change.txt for input
  ifstream fin;
  fin.open("change.txt");
  if (!fin.good()) throw "I/O error";
  
  // output my name and objective and program information
  cout << "Objective: Calculate change due in a transaction using these U.S. bills – no cents: \n $1, $2, $5, $10, $20, $50, $100, $500, $1000, $5000, $10000, and $100000 bills.\n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
  int amountOwed; //amount owed
  int cashPaid;  //amount paids
  int hundredK; //number of $100000 bills
  int tenK; //number of $10000 bills
  int fiveK; //number of $5000 bills
  int oneK;  //number of $1000 bills
  int fiveH; //number of $500 bills
  int oneH;  //number of $100 bills
  int fifty;  //number of $50 bills
  int twenty; //number of $20 bills
  int ten;  //number of $10 bills
  int five;  //number of $5 bills
  int two; //number of $2 bills
  int one;  //number of $1 bills

  //take input from change.txt
  fin >> amountOwed;
  fin.ignore(1000, 10);

  fin >> cashPaid;
  fin.ignore(1000, 10);
  
  //Perform calculation of change due
  int totalChange; // initialize totalChange
  totalChange = cashPaid - amountOwed;
  int changeDue = totalChange;

  //calculate change due
  hundredK = changeDue / 100000;  //number of $100,000 bills
  changeDue = changeDue % 100000;  //remainder from $100,000

  tenK = changeDue / 10000;  //number of $10,000 bills
  changeDue = changeDue % 10000; //remainder from $10,000

  fiveK = changeDue / 5000;  //number of $5,000 bills
  changeDue = changeDue % 5000;  //remainder from $5,000

  oneK = changeDue / 1000;  //number of $1,000 bills
  changeDue = changeDue % 1000; //remainder from $1,000

  fiveH = changeDue / 500;  //number of $500 bills
  changeDue = changeDue % 500;  //remainder from $500

  oneH = changeDue / 100;  //number of $100 bills
  changeDue = changeDue % 100; //remainder from $100

  fifty = changeDue / 50;  //number of $50 bills
  changeDue = changeDue % 50;  //remainder from $50

  twenty = changeDue / 20;  //number of $20 bills
  changeDue = changeDue % 20; //remainder from $20

  ten = changeDue / 10;  //number of $10 bills
  changeDue = changeDue % 10;  //remainder from $10

  five = changeDue / 5;  //number of $5 bills
  changeDue = changeDue % 5;  //remainder from $5

  two = changeDue / 2;  //number of $2 bills
  changeDue = changeDue % 2; //remainder from $2ss

  one = changeDue;  //number of $1 bills

  //ouput original inputs
  cout << "Amount Owed: " << amountOwed << endl;
  cout << "Amount Paid: " << cashPaid << endl;
  cout << "Change Due: " << totalChange << endl;
  cout << " " << endl;

  //output calculated change due for each kind of monetary demonination
  cout << "Number of $100K Bills: " << hundredK << endl;
  cout << "Number of $10K Bills: " << tenK << endl;
  cout << "Number of $5K Bills: " << fiveK << endl;
  cout << "Number of $1K Bills: " << oneK << endl;
  cout << "Number of $500 Bills: " << fiveH << endl;
  cout << "Number of $100 Bills: " << oneH << endl;
  cout << "Number of $50 Bills: " << fifty << endl;
  cout << "Number of $20 Bills: " << twenty << endl;
  cout << "Number of $10 Bills: " << ten << endl;
  cout << "Number of $5 Bills: " << five << endl;
  cout << "Number of $2 Bills: " << two << endl;
  cout << "Number of $1 Bills: " << one << endl;

  fin.close();
}