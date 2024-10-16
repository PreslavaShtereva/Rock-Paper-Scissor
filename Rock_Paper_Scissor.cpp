#include <iostream>
#include <cstdlib>  
#include <ctime>   

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    string choices[] = {"Rock", "Paper", "Scissors"};

    int playerChoice;
    cout << "Welcome to Rock, Paper, Scissors!\n";
    cout << "Choose one: (0) Rock, (1) Paper, (2) Scissors: ";
    cin >> playerChoice;

    if (playerChoice < 0 || playerChoice > 2) {
        cout << "Invalid choice! Please enter 0, 1, or 2." << endl;
        return 1;
    }

    int computerChoice = rand() % 3;

    cout << "You chose: " << choices[playerChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((playerChoice == 0 && computerChoice == 2) || // Rock beats Scissors
               (playerChoice == 1 && computerChoice == 0) || // Paper beats Rock
               (playerChoice == 2 && computerChoice == 1)) { // Scissors beats Paper
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
