//Objective: Objective: Ask for user to input details about themselves (lucky number, fav movie, age, first letter in name) and output it 
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//Libraries
#include <iostream>
#include <string>
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
  cout << "Objective: Ask for users to input information about themseves.\n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Variables
  int luckyNum;
  string favMovie;
  double age;
  char firstLetter;

  //Request input from user and set var values
  cout << "What is your lucky number?" << endl;
  cin >> luckyNum;
  cin.ignore(1000, 10);
  
  cout << "What is your favorite movie?" << endl;
  cin >> favMovie;
  getline(cin, favMovie);
  
  cout << "How old are you?" << endl;
  cin >> age;
  cin.ignore(1000, 10);
  
  cout << "What is the first letter of your name?" << endl;
  cin >> firstLetter;
  cin.ignore(1000, 10);
  
  //Ouput
  cout << "Your lucky number is: " << luckyNum << endl;
  cout << "Your favorite movie is: " << favMovie << endl;
  cout << "You are " << age << " years old" << endl;
  cout << "The first letter of your name is: " << firstLetter << endl;
}