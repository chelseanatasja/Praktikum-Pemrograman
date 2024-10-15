#include <iostream>
#include <vector>
#include <string>

// Function to generate FizzBuzz and store it in a vector
std::vector<std::string> fizzBuzz() {
    std::vector<std::string> result; // Vector to store FizzBuzz results
    for (int i = 1; i <= 100; ++i) { // Loop through numbers from 1 to 100
        if (i % 3 == 0 && i % 5 == 0) { // If divisible by both 3 and 5
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) { // If divisible by 3 only
            result.push_back("Fizz");
        } else if (i % 5 == 0) { // If divisible by 5 only
            result.push_back("Buzz");
        } else { // If not divisible by 3 or 5, store the number as a string
            result.push_back(std::to_string(i));
        }
    }
    return result; // Return the vector containing FizzBuzz results
}

// Function to reverse a vector of integers
std::vector<int> reverseArray(const std::vector<int>& inputArray) {
    // Create a new vector with elements from inputArray in reverse order
    std::vector<int> reversedArray(inputArray.rbegin(), inputArray.rend());
    return reversedArray; // Return the reversed vector
}

void printReversedArray(const std::vector<int>& reversedArray) {
    for (size_t i = 0; i < reversedArray.size(); ++i) {
        std::cout << reversedArray[i];
        if (i < reversedArray.size() - 1) {
            std::cout << ", "; // Add a comma after every element except the last one
        }
    }
    std::cout << std::endl; // Newline for formatting
}

void runReverseArrayTestCases() {
    // Test Case 1
    std::vector<int> testCase1 = {1, 2, 3, 4, 5};
    std::cout << "Test Case 1: {1, 2, 3, 4, 5}\nReversed: ";
    printReversedArray(reverseArray(testCase1));

    // Test Case 2
    std::vector<int> testCase2 = {10, 20, 30};
    std::cout << "Test Case 2: {10, 20, 30}\nReversed: ";
    printReversedArray(reverseArray(testCase2));

    // Test Case 3
    std::vector<int> testCase3 = {5, 10, 15, 20};
    std::cout << "Test Case 3: {5, 10, 15, 20}\nReversed: ";
    printReversedArray(reverseArray(testCase3));

    // Test Case 4
    std::vector<int> testCase4 = {7, 14, 21};
    std::cout << "Test Case 4: {7, 14, 21}\nReversed: ";
    printReversedArray(reverseArray(testCase4));

    // Test Case 5
    std::vector<int> testCase5 = {9, 8, 7, 6};
    std::cout << "Test Case 5: {9, 8, 7, 6}\nReversed: ";
    printReversedArray(reverseArray(testCase5));
}

int main() {
    // Problem 1: FizzBuzz
    std::vector<std::string> fizzBuzzResult = fizzBuzz(); // Get FizzBuzz results
    std::cout << "FizzBuzz Results: " << std::endl;
    // Print FizzBuzz results, one per line
    for (const std::string& s : fizzBuzzResult) {
        std::cout << s << std::endl;
    }

    // Problem 2: Reverse an Array - Hardcoded Test Cases
    std::cout << "\nReverse Array Test Cases:\n";
    runReverseArrayTestCases(); // Run the hardcoded test cases

    return 0; // End of program
}
