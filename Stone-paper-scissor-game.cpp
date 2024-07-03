#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to get user's choice
char getUserChoice() {
    char choice;
    cout << "Enter your choice (s for Stone, p for Paper, x for Scissors): ";
    cin >> choice;
    return choice;
}

// Function to get computer's choice
char getComputerChoice() {
    // Generate a random number between 0 and 2
    int randomNum = rand() % 3;

    // Assign choices based on random number
    if (randomNum == 0)
        return 's'; // Stone
    else if (randomNum == 1)
        return 'p'; // Paper
    else
        return 'x'; // Scissors
}

// Function to determine the winner
void determineWinner(char userChoice, char computerChoice) {
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 's' && computerChoice == 'x') ||
               (userChoice == 'p' && computerChoice == 's') ||
               (userChoice == 'x' && computerChoice == 'p')) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    char userChoice, computerChoice;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Get choices
    userChoice = getUserChoice();
    computerChoice = getComputerChoice();

    // Display computer's choice
    cout << "Computer chose: ";
    switch(computerChoice) {
        case 's':
            cout << "Stone" << endl;
            break;
        case 'p':
            cout << "Paper" << endl;
            break;
        case 'x':
            cout << "Scissors" << endl;
            break;
    }

    // Determine and display the winner
    determineWinner(userChoice, computerChoice);

    return 0;
}

