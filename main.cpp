#include <bits/stdc++.h>
using namespace std;

// define stack
stack<char> st;

// string to store
// result of reversed stack
string ns;

// insert element at bottom of stack
void insert_bottom(char x) {
    if (st.size() == 0) {
        st.push(x);
    }
    else {
        char a = st.top();
        st.pop();
        insert_bottom(x);
        st.push(a);
    }
}

// reverse given stack using insert at bottom
void reverse_stack() {
    if (st.size() > 0) {
        char x = st.top();
        st.pop();
        reverse_stack();
        insert_bottom(x);
    }
}

int main() {
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');

    cout << "Given stack" << endl;
    cout << "1" << " " << "2" << " "
         << "3" << " " << "4" << endl;

    reverse_stack();

    cout << "Reversed stack" << endl;

    // stack into a string for print
    while (!st.empty()) {
        char p = st.top();
        st.pop();
        ns += p;
    }
    // print
    cout << ns[3] << " " << ns[2] << " "
         << ns[1] << " " << ns[0] << endl;

    return 0;
}
