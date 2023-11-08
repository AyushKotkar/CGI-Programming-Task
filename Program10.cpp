// Q10. Find the smallest number using a stack:

#include <iostream>
#include <stack>

int findSmallestInStack(std::stack<int>& st) {
    if (st.empty()) {
        return -1; // Stack is empty
    }

    int smallest = st.top();
    st.pop();

    while (!st.empty()) {
        int current = st.top();
        st.pop();
        if (current < smallest) {
            smallest = current;
        }
    }

    return smallest;
}

int main() {
    std::stack<int> st;
    st.push(4);
    st.push(2);
    st.push(7);
    st.push(1);
    st.push(9);

    int smallest = findSmallestInStack(st);

    if (smallest != -1) {
        std::cout << "Smallest element in the stack: " << smallest << std::endl;
    } else {
        std::cout << "Stack is empty." << std::endl;
    }

    return 0;
}
