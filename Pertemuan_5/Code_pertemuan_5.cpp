#include <iostream>
#include <vector>

std::vector<std::string> fizzBuzz() {
    std::vector<std::string> results;

    for(int i=1; i<=100; ++i){
        if(i % 3 == 0 && i % 5 == 0){
        results.push_back("FizzBuzz");
        } else if(i % 3 == 0){
            results.push_back("Fizz");
        } else if(i % 5 == 0){
            results.push_back("Buzz");
        } else{
            results.push_back(std::to_string(i));
        }
    }
    return result;
    }

    std::vector<int> reverseArray(const std::vector<int>& arr) {
    std::vector<int> reversedArr;
    for (int i = arr.size() - 1; i >= 0; --i) {
        reversedArr.push_back(arr[i]);
    }
    return reversedArr;
}

int main() {
    std::vector<std::string> fizzBuzzResult = fizzBuzz();
    
    for (const std::string& str : fizzBuzzResult) {
        std::cout << str << std::endl;
    }

    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> reversedArr = reverseArray(arr);

    std::cout << "Reversed array: ";
    for (int num : reversedArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
    

