// Q4. Print the first non-repeated character from a string:

#include <iostream>
#include <unordered_map>

char firstNonRepeatedChar(const std::string& str) {
    std::unordered_map<char, int> charCount;
    
    for (char c : str) {
        charCount[c]++;
    }
    
    for (char c : str) {
        if (charCount[c] == 1) {
            return c;
        }
    }
    
    return '\0'; // Return null character if no non-repeated character found
}

int main() {
    std::string str = "programming";
    char result = firstNonRepeatedChar(str);
    
    if (result != '\0') {
        std::cout << "First non-repeated character: " << result << std::endl;
    } else {
        std::cout << "No non-repeated character found." << std::endl;
    }
    
    return 0;
}
