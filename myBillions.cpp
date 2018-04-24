//Objective:  Calculate ho many weeks it takes to become a somethingaire
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

} //introduction

int howManyWeeks (int goal){
    int weeks = 0;
    long savings = 5;
    long total = 0;
    while ((total/100) < goal){
        total += savings;
        savings *= 2;
        weeks++;
    }
    return weeks;
}

//main program
int main()
{
    //Data
    string objective = "is a template";

    //Program introduction
    introduction(objective);

    cout << "In " << howManyWeeks(1000) << " weeks, I will be a thousandaire!" << endl;
    cout << "In " << howManyWeeks(1000000) << " weeks, I will be a millionaire!" << endl;
    cout << "In " << howManyWeeks(1000000000) << " weeks, I will be a billionaire!" << endl;
}