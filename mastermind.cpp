//Objective: Mastermind Game
//Name: Ashwin Chidambaram
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definition
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//Program Introduction
void introduction (string obj)
{
    // output my name and objective and program information
    cout << "Objective: Mastermind Game ";
    cout << obj << endl;
    cout << "Programmer: Ashwin Chidambaram\n";
    cout << "Editor(s) used: Notepad\n";
    cout << "Compiler(s) used: TDM MinGW\n";
    cout << "File: " << __FILE__ << endl;
    cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
}

//Function that assignes a color ot the computer's choice
string compChoice(int c1, int c2, int c3, int c4){
    string compColor = "void";
    
    switch(c1){
        case 0: compColor[0] = 'R';
            break;
        case 1: compColor[0] = 'G';
            break;
        case 2: compColor[0] = 'B';
            break;
        case 3: compColor[0] = 'Y';
            break;
    }

    switch(c2){
        case 0: compColor[1] = 'R';
            break;
        case 1: compColor[1] = 'G';
            break;
        case 2: compColor[1] = 'B';
            break;
        case 3: compColor[1] = 'Y';
            break;
    }

    switch(c3){
        case 0: compColor[2] = 'R';
            break;
        case 1: compColor[2] = 'G';
            break;
        case 2: compColor[2] = 'B';
            break;
        case 3: compColor[2] = 'Y';
            break;
    }

    switch(c4){
        case 0: compColor[3] = 'R';
            break;
        case 1: compColor[3] = 'G';
            break;
        case 2: compColor[3] = 'B';
            break;
        case 3: compColor[3] = 'Y';
            break;
    }
    return compColor;
}

//Function that is used to check the position of the user inputed color choice
int checkPlace(string userInp, string compInp){
    int redU = 0;
    int greenU = 0;
    int blueU = 0;
    int yellowU = 0;
    int redC = 0;
    int greenC = 0;
    int blueC = 0;
    int yellowC = 0;
    int numCorrect = 0;

    for (int i = 0; i < 4; i++){
        switch(userInp[i]){
            case 'R': redU++;
                break;
            case 'G': greenU++;
                break;
            case 'B': blueU++;
                break;
            case 'Y': yellowU++;
                break;
        }
        
        switch(compInp[i]){
            case 'R': redC++;
                break;
            case 'G': greenC++;
                break;
            case 'B': blueC++;
                break;
            case 'Y': yellowC++;
                break;
        }
    }

    if (redU < redC){
        numCorrect += redU;
    }
    else{
        numCorrect += redC;
    }

    if (greenU < greenC){
        numCorrect += greenU;
    }

    else{
        numCorrect += greenC;
    }

    if (blueU < blueC){
        numCorrect += blueU;
    }

    else{
        numCorrect += blueC;
    }

    if (yellowU < yellowC){
        numCorrect += yellowU;
    }

    else{
        numCorrect += yellowC;
    }

    return numCorrect;
}

//Main Program
int main(){
    int loop = 0;
    while (loop == 0) {
        srand(time(0));
        
        //Data
        string objective = "is a template";
        string userInput;
        bool won = false;
        bool valid = false;
        int tries = 0;
        int rightPlace;
        int rightColor;
        int breakAll;

        //Program introduction
        introduction(objective);

        //Program Instructions
        cout << "Mastermind is a game played in which, I, the computer will think of 4 colors in a random orientation. You must guess that orientation." << endl;
        cout << "The colors used are red[R], blue[B], green[G], and yellow[Y]. Please use these characters when inputing a guess. You have 10 guesses." << endl << endl;

        //Determine a random number for each char of color
        int c1 = rand() % 4;
        int c2 = rand() % 4;
        int c3 = rand() % 4;
        int c4 = rand() % 4;

        string compColor = compChoice(c1, c2, c3, c4); //Switch set of numbers to a string of colors

        while (!won && tries <= 10){ //Loop till the guess is correct or a total of 10 tries has occured
            rightPlace = 0;
            rightColor = 0;
            valid = false;
            
            cout << "What is your guess: "; //Request user input
            cin >> userInput; //set userInput to value
            
            while (!valid){
                breakAll = 1;
                while(0 == 0){
                    for (int i = 0; i < 4; i++){
                        userInput[i] = toupper(userInput[i]);

                        if (userInput[i] != 'R' and userInput[i] != 'G' and userInput[i] != 'B' and userInput[i] != 'Y'){
                            cout << "Please enter a valid input: ";
                            cin >> userInput;
                            breakAll = 0;
                            break;
                        }
                    }
                    break;
                }
                
                if (breakAll == 1){
                    valid = true;
                }
            }

            //Loop to make sure letters input can be converted to uppercase
            for (int i = 0; i < 4; i++){
                userInput[i] = toupper(userInput[i]);
                if (userInput[i] == compColor[i]){
                    rightPlace++;
                }
            }
            
            rightColor = checkPlace(userInput, compColor);

            if(rightPlace == 4){
                won = true;
                break;
            }

            cout << "Number of Correct Placement: " << rightPlace;
            cout << "\nNumber of Correct Colors: " << rightColor;
            tries++;
            cout << "\nYou have " << 10 - tries << " tries left.\n\n";
        }
        if (won == true){
            cout << "\n\nCongrats! You guessed the computer's choice!\n";
        }

        else {
            cout << "\n\nSorry, you lost. The computer's choice was actually " << compColor << ". Better luck next time!\n";
        }

        cout<< "Enter '0' if you would like to play again. To exit, type any other number" << endl;
        cin >> loop;

    }
}