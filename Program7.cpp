// Q7. Convert prefix expression to infix expression:

#include <iostream>
#include <stack>
#include <string>

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

std::string prefixToInfix(const std::string& prefix) {
    std::stack<std::string> st;
    int len = prefix.length();
    
    for (int i = len - 1; i >= 0; i--) {
        if (!isOperator(prefix[i])) {
            st.push(std::string(1, prefix[i]));
        } else {
            std::string operand1 = st.top();
            st.pop();
            std::string operand2 = st.top();
            st.pop();
            std::string temp = "(" + operand1 + prefix[i] + operand2 + ")";
            st.push(temp);
        }
    }
    
    return st.top();
}

int main() {
    std::string prefixExp = "-+ab*cd";
    std::string infixExp = prefixToInfix(prefixExp);
    
    std::cout << "Prefix expression: " << prefixExp << std::endl;
    std::cout << "Infix expression: " << infixExp << std::endl;
    
    return 0;
}
