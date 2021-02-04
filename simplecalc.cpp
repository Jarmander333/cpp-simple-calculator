// Include files - iostream for std::cout, and std::cin - fstream for file use.
#include <iostream>
#include <fstream>

// Main function
int main(int argc, const char *argv[]) {
    Begin: // Beginning of file to go back to if the user just want to do another equation without re-launching the program

    // Definition of all variables needed
    char op; // variable that holds the operator - can be: +, -, *, /
    char again; // variable that holds the user's choice of if they want to do another equation - can be: 1
    float num1; // variable that holds the first number of the equation - can be: any real number (other than fractions -- don't try...)
    float num2; // variable that holds the second number of the equation - can be: any real number (other than fractions -- don't try...)

    // Next few lines print the words as follows (that are in quotes [\n means return a line, so it doesnt display as \n]):
    std::cout << "Welcome to Calculator 1.0.0 \n";
    std::cout << "\n 1. + for Addition \n \n";
    std::cout << "\n 2. - for Subtraction \n \n";
    std::cout << "\n 3. * for Multiplication \n \n";
    std::cout << "\n 4. / for Division \n \n";

    std::cout << "Type in the symbol (+, -, *, /) corresponding to your operator. \n \n"; // Asks the user for the operator they'd like to do
    std::cin >> op; // Scan for something to put as the operator (hopefully +, -, *, /)

    std::cout << "Type in the first number of your equation. \n \n"; // Asks the user for the first number of an equation
    std::cin >> num1; // Sets the user's choice of number as "num1"
    
    std::cout << "Type in the second number of your equation. \n \n"; // Asks the user for the second number of an equation
    std::cin >> num2; // Sets the user's choice of number as "num2"

    std::ofstream file; // Initializes to open/create a file
    file.open ("outputs.txt"); // Opens/Creates a file called "outputs.txt"

    
    switch(op) {
        case '+': // Sets a case so if the variable "op" is a "+" it adds num1 and num2 together 
            // Displays on screen that num1 + num2 = answer
            std::cout << num1;
            std::cout << "+";
            std::cout << num2;
            std::cout << "=";
            std::cout << num1+num2;
            // Writes the equation and answer to "outputs.txt", and closes, and saves the file
            file << num1;
            file << "+";
            file << num2;
            file << "=";
            file << num1+num2;
            file << "\n \n";
            file.close();
            std::cout << "\n \n";
            break;

        case '-': // Sets a case so if the variable "op" is a "-" it subtracts num1 and num2 from each other 
            // Displays on screen that num1 - num2 = answer
            std::cout << num1;
            std::cout << "-";
            std::cout << num2;
            std::cout << "=";
            std::cout << num1-num2;
            // Writes the equation and answer to "outputs.txt", and closes, and saves the file
            file << num1;
            file << "-";
            file << num2;
            file << "=";
            file << num1-num2;
            file << "\n \n";
            file.close();
            std::cout << "\n \n";
            break;

        case '*': // Sets a case so if the variable "op" is a "*" it multiplies num1 and num2 together 
            // Displays on screen that num1 * num2 = answer
            std::cout << num1;
            std::cout << "*";
            std::cout << num2;
            std::cout << "=";
            std::cout << num1*num2;
            // Writes the equation and answer to "outputs.txt", and closes, and saves the file
            file << num1;
            file << "*";
            file << num2;
            file << "=";
            file << num1*num2;
            file << "\n \n";
            file.close();
            std::cout << "\n \n";
            break;

        case '/': // Sets a case so if the variable "op" is a "*" it multiplies num1 and num2 together 
            // Displays on screen that num1 / num2 = answer
            std::cout << num1;
            std::cout << "/";
            std::cout << num2;
            std::cout << "=";
            std::cout << num1/num2;
            // Writes the equation and answer to "outputs.txt", and closes, and saves the file
            file << num1;
            file << "/";
            file << num2;
            file << "=";
            file << num1/num2;
            file << "\n \n";
            file.close();
            std::cout << "\n \n";
            break;

        default:
        {
            file << "undefined error \n \n"; // Write an error to the .txt file
            file.close(); // Close the file
            std::cout << "The operation you typed does not exist!!  Pick from +, -, *, / \n \n"; // Display text saying that the user didn't input a valid operator
            break; 
        }
    }
    
    std::cout << "Would you like to do another equation? (\"y\" for yes, and \"n\" for no) \n \n"; // Asks the user 
    std::cin >> again; // Assigns the user's choice to the variable "again", and uses it to see whether to close, or restart the program

    if (again = 1) {
        std::cout << "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n"; // Clears the screen
        goto Begin; // Go back to the beginning of the program
    } else {
        std::cout << "You may terminate the program now."; // Tells the user that they can close the program
    }
    return 0; // Returns the program a 0 so that the program knows that it's job is over
}
