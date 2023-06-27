#include<bits/stdc++.h>
using namespace std;

class myStack {
    public:
        vector<int> v;
        
        void push (int val) {        // Add new elemeny in vector's tail
            v.push_back(val);
        }

        void pop () {                // Delete tail element from vector
            v.pop_back();
        }

        int top () {                 // Access the top value or last value of the vector
            return v.back();   
        }
        int size () {                // Size of the vector
            return v.size();
        }
        bool empty () {              // Check is the vector empty or not
            if (v.size() == 0) return true;
            else               return false;
        }
};

int main () {

    // Stack Implement using Array

    myStack st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    if (st.empty() == false) {
        cout << st.top() << endl;
    }
    else {
        cout << "Vector is empty" << endl;
    }

    return 0;
}