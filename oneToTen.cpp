//Objective: Random Number Guessing Game
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//Libraries
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
  srand(time(0));
  //Output my name and objective and program information
  cout << "Objective: Create a random number guessing game. \n"; 
  cout << "Programmer: Ashwin Chidambaram\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Variables
  int number = 0;
  int guess = 0;
  
  number = 1 + rand() % 10; //Run rand fucntion and pick a number between 1-10

  //Request input from user within loop function
  cout << "I'm, thinking of a number between 1 and 10, can you guess what it is?" << endl;
  cin >> guess;
  while(number != guess)
  {
      
  if(guess > 10 || guess < 1)
  {
      cout << "Your guess must be between 1 and 10" << endl;
  }

  cout << "Sorry, but that is wrong. Try a different number..." << endl;
  cin >> guess;
  }
  
  cout << "You guessed correctly!" << endl;
}