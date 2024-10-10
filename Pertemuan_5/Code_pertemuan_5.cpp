#include <iostream>
#include <vector>

int main(){
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
    for (const auto& result : results){
        std::cout << result << std::endl;
    }
    return 0;
}
