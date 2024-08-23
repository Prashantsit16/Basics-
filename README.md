# Basics-

Aim:
To implement basic arithmetic operations (sum and difference) in C++ and demonstrate how to take input from the user and display results. This includes reading user input values, performing arithmetic operations, and outputting the results.

Theory:
Basic arithmetic operations in C++ are fundamental for performing calculations:

Sum: Adds two numbers together.
Difference: Subtracts one number from another.
User input and output in C++ are handled using the cin and cout streams from the iostream library. cin reads input from the keyboard, while cout writes output to the console. Properly managing these operations allows for interactive programs that respond to user-provided data.
Procedure:
Include Required Headers:

cpp
Copy code
#include <iostream>
using namespace std;
Define Main Function:

cpp
Copy code
int main() {
    // Declare variables
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;  // Read first number from user
    
    cout << "Enter the second number: ";
    cin >> num2;  // Read second number from user

    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;

    //  results
    cout << "Sum: " << sum << endl;          // Output the sum
    cout << "Difference: " << difference << endl; // Output the difference

    return 0;

Compile and Run:
Use a C++ compiler to compile and execute the program. Provide input when prompted and observe the results displayed for sum and difference.

Conclusion:
The implementation of basic arithmetic operations in C++—sum and difference—demonstrates foundational programming concepts. Handling user input with cin and displaying results with cout enables interactive applications. This practice reinforces essential skills in data manipulation and user interaction. The example effectively showcases these operations and their practical applications.
