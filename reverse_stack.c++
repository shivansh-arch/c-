#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int topVal = st.top();
    st.pop();

    insertAtBottom(st, x);  // keep popping until empty

    st.push(topVal);        // rebuild stack on return
}

void reverseStack(stack<int> &st) {
    if (st.empty()) return;

    int topVal = st.top();
    st.pop();

    reverseStack(st);       // reverse remaining stack

    insertAtBottom(st, topVal);  // put top element at bottom
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);in

    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
