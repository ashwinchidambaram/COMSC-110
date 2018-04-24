// Objective: Objective: Read scores [0-100] from input file and calculate the highest, lowest, average scores, number of scores greater than the average, and number of perfect scores
// Name: Ashwin Chidambaram
// Course: COMSC-110-1021
// Compiler: TDM MinGW
// Editor: MS NotePad

//Libraries
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

// Programmer defined data types
// NONE

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string obj);

//Main program
int main(){
    ifstream fin; // Allow for file reading

    // Data
    string objective = "Read text file of scores and output highest score, lowest score, avg score, number of scores above average, and perfect scores ";
    string fileName;
    int i = 0;
    int maxScore;
    int minScore;
    int count = 0; // counter to be used for taking avg
    int totalScores; // calculate sum of all numbers
    double averageScore; // average of all scores
    int nGreater = 0; // number of scores greater than average
    double temp; // temp variable used to store numbers to be transfered to vector

    //Declare vector
    vector<double> allScores; // vector to store all scores

    // Program introduction
    introduction(objective);

    // Read input from selected file and add to array
    cout << "Enter the name of the file containing all the scores: ";
    getline(cin, fileName);
    fin.open(fileName.c_str());
    if (!fin.good()) throw "I/O error";

    // read and save the scores
    while (fin.good())
    {
        // read a score from the file
        fin >> temp;
        allScores.push_back(temp);   // add to all scores vector
        count ++;
    } // while

    if (count == 0)
    {
        cout << "Sorry the file is empty.";
    }

    // Declare a vector to store scores
    totalScores = 0;
    maxScore = allScores[0];
    minScore = allScores[0];
    for (int i = 0; i < count; i++)
    {
        totalScores = totalScores + allScores[i]; // calculate sum of all numbers
        if (allScores[i] > maxScore)
        {
            maxScore = allScores[i];
        } // if validation
        else if (allScores[i] < minScore)
        {
            minScore = allScores[i];
        }
    }

    averageScore = totalScores / count; // find the average

    for (int i = 0; i < count; i++)
    {
        if (allScores[i] > averageScore)
        {
            nGreater++;
        } // if validation
    }

    cout << "\nThe average of " << count << " scores is: " << averageScore;
    cout << "\nThe highest score is: " << maxScore;
    cout << "\nThe lowest score is: " << minScore;
    cout << "\nThe number of scores greater than the average is: " << nGreater;
    fin.close();
} // main

// Introduction
void
introduction(string obj)
{
    cout << "Objective: ";
    cout << obj << endl;
    cout << "Programmer: Ashwin Chidambaram\n";
    cout << "Editor(s) used: Notepad\n";
    cout << "Compiler(s) used: TDM MinGW\n";
    cout << "File: " << __FILE__ << endl;
    cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
}