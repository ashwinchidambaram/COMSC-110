//Objective: Objective: Make a simple calculator.
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//Libraries
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
  //Output my name and objective and program information
  cout << "Objective: Create a simple calculator\n";
  cout << "Programmer: Ashwin Chidambaram\n";
  cout << "Editor(s) used: Notepad\n";
  cout << "Compiler(s) used: TDM MinGW\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;

  //Variables
  double num1; //first number
  double num2; //second number
  int function; //operand being used
  int x = 0; //use this to loop calculator until done
  double ans; //answer to whatver fucntion was performed
  string sign; 
  
  while(x == 0) //if (x != 0) when value of is asked for at the end, the code is exited
  {
    //Ask for the two numbers we will calculate with
    cout << "What is the first number you want to use?" << endl;
    cin >> num1;
    cout << "What is the second number you want to use?" << endl;
    cin >> num2;

    //Request input from user on which function they want to do
    cout << "Which operand would you like to perform? [1]-Addition, [2]-Subtraction, [3]-Multiplication, [4]-Divison" << endl;
    cin >> function; 
  
    //Make sure that user inputs a valid function number
    while(function > 4 || function < 1)
    {
        cout << "Please enter a valid function.  [1]-Addition, [2]-Subtraction, [3]-Multiplication, [4]-Divison" << endl;
        cin >> function;
    }
    
    //Selects operand to use
    if(function == 1)
    {
        ans = num1 + num2;
        sign  = " + ";
    }
  
    else if(function == 2)
    {
        ans = num1 - num2;
        sign = " - ";
    }
  
    else if(function == 3)
    {
        ans = num1 * num2;
        sign = " * ";
    }
  
    else if(function == 4)
    {
        ans = num1 / num2;
        sign = " / ";T
    }
  
    cout << num1 << sign << num2 << " = " << ans << endl;
    
    cout << "Would you like to perform a new calculation? Enter '0' if yes or enter any number other than 0 to exit." << endl;
    cin >> x;
  }
}
  
  

 
