// Q9. Reverse a stack:

#include <iostream>
#include <stack>

void insertAtBottom(std::stack<int>& st, int item) {
    if (st.empty()) {
        st.push(item);
    } else {
        int temp = st.top();
        st.pop();
        insertAtBottom(st, item);
        st.push(temp);
    }
}

void reverseStack(std::stack<int>& st) {
    if (!st.empty()) {
        int temp = st.top();
        st.pop();
        reverseStack(st);
        insertAtBottom(st, temp);
    }
}

int main() {
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    std::cout << "Original Stack: ";
    while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);

    std::cout << "\nReversed Stack: ";
    while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
