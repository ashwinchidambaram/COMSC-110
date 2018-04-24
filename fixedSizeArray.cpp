//Objective: You will be prompted for 4 numbers to get the average and how many of those numbers are above the average.
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
//NONE

//Program introduction
void introduction (string obj)
{
    // output my name and objective and program information
    cout << "Objective: You will be prompted for 4 numbers to get the average and how many of those numbers are above the average. ";
    cout << obj << endl;
    cout << "Programmer: Ashwin Chidambaram\n"; 
    cout << "Editor(s) used: Notepad\n";
    cout << "Compiler(s) used: TDM MinGW\n";
    cout << "File: " << __FILE__ << endl;
    cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
}

//main program
int main() 
{
    //Data
    string objective = "is a template"; // For intro output
    double numArray[4];
    double number;
    double average = 0;
    double sum = 0;
    int count = 0;
    int i = 0;
    int nGreater = 0;
    
    //Program introduction
    introduction(objective);
    
    //Loop 
    for (i = 0; i <= 3; i++) { //Loop till we receive 4 inputs
        cout << "Please enter a number [0-100]: ";
        cin >> number;
        cin.ignore(1000, 10);
        
        if(number <= 0 or number >= 100) { //Validation loop to make sure number is within bounds
            cout << "Please enter a valid input: ";
            cin >> number;
            cin.ignore(1000, 10);
        }
        
        numArray[count] = number; //add values to array
        
        sum = sum + numArray[count]; //find the sum of numbers within array
        
        count = count + 1; //counter
    }
    
    //calculate average
    if (count > 0)
    average = sum / count;

    //calculate the number of input values that are greater than the average
    if (average < numArray[i] || i < count) {
        nGreater++;
        i++;
    }
    
    //output results
    cout << "The average of " << count;
    cout << " numbers is " << average;
    cout << ". " << nGreater;
    cout << " numbers are greater than the average." << endl;
}
