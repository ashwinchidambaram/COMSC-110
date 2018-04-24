// Objective: Card Game: War
// Name: Ashwin Chidambaram
// Course: COMSC-110-1021
// Compiler: TDM MinGW
// Editor: MS NotePad

// Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Programmer defined data types
// NONE

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

struct PlayingCard
{
    string value;
    string suit;
} cardHuman[26], cardComp[26];


// Programmer defined functions
void introduction(string obj);

// Main program
int main() {
  srand(time(0));  // Allow for rand function to be used

  //Data
  string objective = "Play card game - 'War' ";
  char playAgain = 'Y';
  int compCardVal;
  string compValue;
  int compCardSuit;
  string compSuit;
  int playerCardVal;
  string playerValue;
  int playerCardSuit;
  string playerSuit;
  int deck[13][4];
  int counter = 0;
  int playerWins = 0;
  int computerWins = 0;
  
  // Program introduction
  introduction(objective);
  
  while(playAgain == 'Y' or playAgain == 'y')
  {
    compCardVal = 2 + rand() % 14; //Run rand fucntion and pick a number between 2 - 14
    compCardSuit = rand() % 3; //Run rand function and pick a number between 0 and 3
    playerCardVal = 2 + rand() % 14; //Run rand fucntion and pick a number between 2 - 14
    playerCardSuit = rand() % 3; //Run rand function and pick a number between 0 and 3
  
    while (deck[compCardVal - 2][compCardSuit] == 20)
    {
      compCardVal = 2 + rand() % 14; //Run rand fucntion and pick a number between 2 - 14
      compCardSuit = rand() % 3;
    } //while

    while (deck[playerCardVal - 2][playerCardSuit] == 20)
    {
      playerCardVal = 2 + rand() % 14; //Run rand fucntion and pick a number between 2 - 14
      playerCardSuit = rand() % 3;
    } //while

    deck[compCardVal - 2][compCardSuit] = 20;
    cardComp[counter].value = compCardVal;
    cardComp[counter].suit = compCardSuit;
    deck[playerCardVal - 2][playerCardSuit] = 20;
    cardHuman[counter].value = playerCardVal;
    cardHuman[counter].suit = playerCardSuit;
  
    //Setting computer card value; 2-10 is just val, 11 as Jack, 12 as Queen, 13 as King, and 14 as Ace
    if(compCardVal == 11)
    {
      compValue = "Jack";
    } //if
    else if(compCardVal == 12)
    {
      compValue = "Queen";
    } //else if
    else if(compCardVal == 13)
    {
      compValue = "King";
    } //else if
    else if(compCardVal == 14)
    {
      compValue = "Ace";
    } //else if
    else
    {
      compValue = compCardVal;
      cout << compValue << endl;
    } //else
  
    //Setting computer card suit; 0 as Spades, 1 as Diamonds, 2 as Hearts, and 3 as Clubs
    if(compCardSuit == 0)
    {
      compSuit = "Spades";
    } //if
    else if(compCardSuit == 1)
    {
      compSuit = "Diamonds";
    } //else if
    else if(compCardSuit == 2)
    {
      compSuit = "Hearts";
    } //else if
    else if(compCardSuit == 4)
    {
      compSuit = "Clubs";
    } //else if
  
    //Setting player card value; 2-10 is just val, 11 as Jack, 12 as Queen, 13 as King, and 14 as Ace
    if(playerCardVal == 11)
    {
    playerValue = "Jack";
    } //if
    else if(playerCardVal == 12)
    {
      playerValue = "Queen";
    } //else if
    else if(playerCardVal == 13)
    {
      playerValue = "King";
    } //else if
    else if(playerCardVal == 14)
    {
      playerValue = "Ace";
    } //else if
  
    //Setting player card suit; 0 as Spades, 1 as Diamonds, 2 as Hearts, and 3 as Clubs
    if(playerCardSuit == 0)
    {
    playerSuit = "Spades";
    } //if
    else if(compCardSuit == 1)
    {
      playerSuit = "Diamonds";
    } //else if
    else if(compCardSuit == 2)
    {
      playerSuit = "Hearts";
    } //else if
    else if(compCardSuit == 4)
    {
      playerSuit = "Clubs";
    } //else if
  
    //Output Computer
    if(compCardVal > 10)
    {
      cout << "Compter choice is: " << compValue << " of " << compSuit << endl;
    } //if
    else if (compCardVal < 11)
    {
      cout << "Compter choice is: " << compCardVal << " of " << compSuit << endl;
    } //else if
  
    //Output Player
    if(playerCardVal > 10)
    {
      cout << "Player choice is: " << playerValue << " of " << playerSuit << endl;
    } //if
    else if (playerCardVal < 11)
    {
      cout << "Player choice is: " << playerCardVal << " of " << playerSuit << endl;
    } //else if
    
    //Check for winner and output
    if(compCardVal > playerCardVal)
    {
      computerWins++;
    } //if
    else if(compCardVal < playerCardVal)
    {
      playerWins++;
    } //else if
    else
    {
      if(compCardSuit > playerCardSuit)
      {
        computerWins++;
      } //if
      else if(playerCardSuit >> compCardSuit)
      {
        playerWins++;
      } //else if
    } //else
    //Output score
    cout << "-->--" << endl;
    cout << "Computer Wins: " << computerWins << ", Player Wins: " << playerWins << endl;
    
    cout << "Continue? [Y/N]: ";
    cin >> playAgain;
    
    while(playAgain != 'y' and playAgain != 'Y' and playAgain != 'n' and playAgain != 'N')
    {
    cout << "Continue? [Y/N]: ";
    cin >> playAgain;
    } //while
    
    if(playAgain == 'N' or playAgain == 'n')
    {
      break;
    } //if
    
    counter++;
  } //while
}  // main


// Introduction
void introduction(string obj)
{
  cout << "Objective: ";
  cout << obj << endl;
  cout << "Programmer: Ashwin Chidambaram\n";
  cout << "Editor(s) used: Notepad\n";
  cout << "Compiler(s) used: TDM MinGW\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
}