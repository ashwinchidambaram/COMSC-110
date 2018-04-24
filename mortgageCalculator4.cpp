//Objective: Calculate mortgage based on a 30 year fixed loan
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream> //for reading txt file
#include <iomanip> //formatting
#include <iostream> //console IO
#include <cmath> //to use pow function
using namespace std;

//Programmer defined data types
struct mortgage
{
    double monthlyPayment; //what we want to find out
    double p; //total amount borrowed (input)
    double r; //anual interest rate (input)
    double mr; //monthly intrest rate
    double pr; //store the percent value of the intrest rate
}; //

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void getPassword();
void introduction(string obj);

void outputMortgage(mortgage& payment) {
    //Calculate variables
    int n = 360;
    payment.mr = double(payment.r / 12); //monthly intrest rate
    payment.monthlyPayment = (payment.p * (pow((1 + payment.mr), n) * payment.mr)) / (pow((1 + payment.mr), n) - 1);
} //outputMortgage

//main program
int main()
{
    ifstream fin;
    string objective = "Objective: You will be prompted for 4 numbers to get the average and how many of those numbers are above the average.";
    
    //Data
    mortgage payment;
    
    //Program introduction
    introduction(objective);
    
    getPassword();
    
    //Request file name
    string fileName;
    cout << "Please enter file name. ";
    cin >> fileName;
    fin.open ("mortgage.txt");
    
    //read from file
    fin >> payment.p; //read amount borrowed
    fin >> payment.r; //read intrest rate
    payment.pr = payment.r;
    payment.r = payment.r / 100;

    outputMortgage(payment);
    
    //Output
    cout << "Amount Borrowed = $" << payment.p << endl;
    cout << "Annual Intrest Rate = " << payment.pr << "%" << endl;
    cout << "Payback period = 30 years" << endl;
    
    //Format Output for monthly payment
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
    cout << "Monthly Payment = $" << payment.monthlyPayment << "." << endl;
}

//Program introduction
void introduction (string obj)
{
    // output my name and objective and program information
    cout << obj << endl;
    cout << "Programmer: Ashwin Chidambaram\n";
    cout << "Editor(s) used: Notepad\n";
    cout << "Compiler(s) used: TDM MinGW\n";
    cout << "File: " << __FILE__ << endl;
    cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
}

void getPassword() {
    while (true) {
        string password;
        cout << "Enter the password: ";
        getline(cin, password);
        
        if(password == "1429000") break;
        cout << "WRONG. ";
    } // while
} // getPassword
