// Q8. Check if all brackets are closed in a given code snippet:

#include <iostream>
#include <stack>

bool areBracketsBalanced(const std::string& code) {
    std::stack<char> brackets;
    for (char c : code) {
        if (c == '(' || c == '{' || c == '[') {
            brackets.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (brackets.empty()) {
                return false;
            }
            char top = brackets.top();
            brackets.pop();
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return brackets.empty();
}

int main() {
    std::string code = "if (x > 0) { y = x; }";
    if (areBracketsBalanced(code)) {
        std::cout << "Brackets are balanced." << std::endl;
    } else {
        std::cout << "Brackets are not balanced." << std::endl;
    }
    return 0;
}
