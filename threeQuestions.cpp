//Objective: Program that is a simple quiz with three questions
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries

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

//progran introduction

void introduction (string obj)
{
  //Data
  
  //obj represents the program objective
  
  // output my name and objective and program information
  
  
  cout << "Objective: This program ";
  cout << obj << endl;
  cout << "Programmer: Ashwin Chidambaram\n";
  cout << "Editor(s) used: Notepad\n";
  cout << "Compiler(s) used: TDM MinGW\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;

}

bool askQuestion(string question, string answer){
    //Question 1
    if (question == "data type"){
        if (answer == "b"){
            return true;
        }

        else{
            return false;
        }
    }
    
    //Question 2
    else if (question == "square root"){
        if (answer == "c"){
            return true;
        }
        else{
            return false;
        }
    }
    
    //Question 3
    else if (question == "binary"){
        if (answer == "11"){
            return true;
        }
        
        else{
            return false;
        }

    }
    
    else{
        return false;
    }

}
//main program

int main()
{
    //Data
    string objective = "is a template";
    
    //Program introduction
    introduction(objective);
    string answer;
    int correct = 0;
    
    //Question 1
    cout << "1. What data type do you use for a whole number?\n";
    cout << "a) float   b) int   c) double\n";
    cout << "Your answer: ";
    cin >> answer;

    if (askQuestion("data type", answer)) {
        cout << "Correct!";
        correct++;
    }
    
    else{
        cout << "Incorrect, the answer is actually: b) int";
    }
    
    //Question 2
    cout << "\n\n2. What library would you need to import for the square root method?\n";
    cout << "a) <iostream>   b) <string>  c) <cmath>\n";
    cout << "Your answer: ";
    cin >> answer;

    if (askQuestion("binary", answer)){
        cout << "Correct!";
        correct++;
    }

    else{
        cout << "Incorrect, the answer is actually: c) <cmath>";
    }
    
    //Question 3
    cout << "\n\n3. What is the binary value of the number 3?\n";
    cout << "Your answer: ";
    cin >> answer;

    if (askQuestion("binary", answer)) {
        cout << "Correct!";
        correct++;
    }

    else{
        cout << "Incorrect, the answer is actually: 11";
    }
    
    //Output score and end message
    cout << "\n\nThat's " << correct << " correct out of 3 questions asked.\n";

}//main