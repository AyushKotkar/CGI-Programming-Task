// Q6. Convert postfix to prefix expression:

#include <iostream>
#include <stack>
#include <string>

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

std::string postfixToPrefix(const std::string& postfix) {
    std::stack<std::string> st;
    int len = postfix.length();
    
    for (int i = 0; i < len; i++) {
        if (!isOperator(postfix[i])) {
            st.push(std::string(1, postfix[i]));
        } else {
            std::string operand1 = st.top();
            st.pop();
            std::string operand2 = st.top();
            st.pop();
            std::string temp = postfix[i] + operand2 + operand1;
            st.push(temp);
        }
    }
    
    return st.top();
}

int main() {
    std::string postfixExp = "ab+ef*g*-";
    std::string prefixExp = postfixToPrefix(postfixExp);
    
    std::cout << "Postfix expression: " << postfixExp << std::endl;
    std::cout << "Prefix expression: " << prefixExp << std::endl;
    
    return 0;
}
