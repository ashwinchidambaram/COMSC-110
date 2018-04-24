
//Objective: Objective: Rock, Paper, Scissors Game 
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
  cout << "Objective: Create a rock, paper, scissors game.\n";  
  cout << "Programmer: Ashwin Chidambaram\n";  
  cout << "Editor(s) used: Notepad\n";  
  cout << "Compiler(s) used: TDM MinGW\n";  
  cout << "File: " << __FILE__ << endl;  
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;  
  
  //Variables 
  int set = 0; //Used to validate the imputed values 
  char user; //Used to store whether the user pick rock, paper, or scissors  
  int player;
  int comp; //Stores computer's guess 
  string userPlay;
  string compPlay;
  int result; //Whether the computer or user won the round 
  int userWins = 0; //Summation of user wins 
  int compWins = 0; //Summation of computer wins 
 
  while(1 == 1) //infinite loop till user inputs "Q"
  { 
    comp = 1 + rand() % 3; //the computer's pick 
     
    //Ask for what the user picks. 
    cout << "Pick rock[R], paper[P], scissors[S], or quit[Q]: "; 
    cin >> user; 
     
    //Convert the char to uppercase if it was input as lowercase 
    if(islower(user)) { 
        user = toupper(user); 
    } 
     
    //If the user inputs "Q" they will quite the code and a message will be output 
    if(user == 'Q') { 
        break; 
    } 
     
    //Input validation     
    if(user == 'R') { 
        set = 1; 
        player = 1; 
    } 
    if(user == 'P') { 
        set = 1; 
        player = 2; 
    } 
    if(user == 'S') { 
        set = 1; 
        player = 3; 
    } 
    while(set != 1) { 
        cout << "Please enter a valid input." << endl; 
        cin >> user; 
        if(islower(user)) { 
          user = toupper(user); 
        } 
         
        if(user == 'R') { 
          set = 1; 
          player = 1;
        } 
        else if(user == 'P') { 
          set = 1; 
          player = 2;
        } 
        else if(user == 'S') { 
          set = 1; 
          player = 3;
        } 
    } 
     
    set = 0; //Set to zero since previous loop will run if the whole program is run once more 
     
    //Compare userInput when user inputs rock 
    if(player == 1 && comp == 2) { 
        result = 2; 
    } 
    if(player == 1 && comp == 3) { 
        result = 1; 
    } 
     
    //Compare userInout when user inputs paper 
    if(player == 2 && comp == 1) { 
        result = 1; 
    } 
    if(player == 2 && comp == 3) { 
        result = 2; 
    } 
     
    //Compare userInput when user inputs scissors  
    if(player == 3 && comp == 1) { 
        result = 2; 
    } 
    if(player == 3 && comp == 2) { 
        result = 1; 
    } 
     
    //Used when computer and user picks the same option
    if(player == comp) { 
        result = 0; 
    } 
     
    //Convert user and computer plays into text for output 
    
    if(player == 1){
        userPlay = "Rock"; 
    }
    else if(player == 2){
        userPlay = "Paper"; 
    }
    else if(player == 3){
        userPlay = "Scissors"; 
    }     
    
    if(comp == 1){
        compPlay = "Rock";
    }
    else if(comp == 2){
        compPlay = "Paper";
    }
    else if(comp == 3){
        compPlay = "Scissors";
    }   
    //Output user and computer picks
    cout << "Player chose: " << userPlay << ", Computer chose: " << compPlay << endl;
    
    //Used to add wins and losses 
    if(result == 1) { 
        userWins = userWins + 1; 
        cout << "You win!" << endl; 
    } 
    else if(result == 2) { 
        compWins = compWins + 1;  
        cout << "You lose" << endl; 
    } 
    else{
        cout << "You tied." << endl;
    }
    //Output results  
    cout << "Score: Player - " << userWins << " , Computer - " << compWins << endl << endl; 
    } 
    
    //Output exit message
    cout << "Final Score: Player - " << userWins << " , Computer - " << compWins << endl;
    if (userWins > compWins){
        cout << "Congratulations! You beat the computer!" << endl;
    }
    else if (userWins < compWins){
        cout << "Sorry, you lost against the computer." << endl;
    }
    else{
        cout << "The game ended in a tie." << endl;
    }
    cout << "Thanks for playing!" << endl; 
  } 
 
 