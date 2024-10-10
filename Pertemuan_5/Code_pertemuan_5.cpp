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

int main() {
    // Problem 1: FizzBuzz
    std::vector<std::string> fizzBuzzResult = fizzBuzz(); // Get FizzBuzz results
    std::cout << "FizzBuzz Results: " << std::endl;
    // Print FizzBuzz results, one per line
    for (const std::string& s : fizzBuzzResult) {
        std::cout << s << std::endl;
    }

    // Problem 2: Reverse an Array
    std::vector<int> arrayToReverse; // Vector to store user input array
    int n, element;

    // Ask the user for the number of elements in the array
    std::cout << "\nEnter the number of elements in the array: ";
    std::cin >> n;

    // Ask the user to enter each element of the array
    std::cout << "Enter the elements of the array: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> element; // Take each element as input
        arrayToReverse.push_back(element); // Store the element in the vector
    }

    // Reverse the array using the reverseArray function
    std::vector<int> reversedArray = reverseArray(arrayToReverse);

    // Print the reversed array with commas between the elements
    std::cout << "Reversed Array: ";
    for (size_t i = 0; i < reversedArray.size(); ++i) {
        std::cout << reversedArray[i];
        if (i != reversedArray.size() - 1) { // Add comma after every element except the last one
            std::cout << ", ";
        }
    }
    std::cout << std::endl; // Newline for formatting

    return 0; // End of program
}
