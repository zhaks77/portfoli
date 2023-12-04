#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    int lowerBound = 1; // Set the lower bound for the random number
    int upperBound = 100; // Set the upper bound for the random number

    // Generate a random number between lowerBound and upperBound
    int randomNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;

    int attempts = 0;
    int guess;

    std::cout << "Welcome to the Guess the Number Game!" << std::endl;
    std::cout << "I'm thinking of a number between " << lowerBound << " and " << upperBound << "." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        }
        else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        }
        else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != randomNumber);

    return 0;
}
