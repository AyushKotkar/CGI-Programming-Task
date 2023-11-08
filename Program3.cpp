// Q3. Check if two strings are a rotation of each other:

#include <iostream>
#include <string>

bool areRotations(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    
    std::string combined = str1 + str1;
    
    return combined.find(str2) != std::string::npos;
}

int main() {
    std::string str1 = "abcde";
    std::string str2 = "cdeab";
    
    if (areRotations(str1, str2)) {
        std::cout << "The strings are rotations of each other." << std::endl;
    } else {
        std::cout << "The strings are not rotations of each other." << std::endl;
    }
    
    return 0;
}
