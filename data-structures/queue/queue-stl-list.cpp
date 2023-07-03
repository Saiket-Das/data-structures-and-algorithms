#include<bits/stdc++.h>
using namespace std;

class myQueue {
    public:
        list<int> l;

        void push (int val) {
           l.push_back(val);
        }

        void pop () {
            l.pop_front();
        }

        int front () {
            return l.front();
        }

        int size () {
            return l.size();
        }

        bool empty () {
            return l.empty();
        }
};

int main () {

    // Queue Implement using STL List

    myQueue q;

    int n;                  // Number of element
    cin >> n;

    while (n--) {
        int value;          // 1 3 5 7 9
        cin >> value;
        q.push(value);
    }

    while (!q.empty()) {
        cout << q.front() << " ";     // 1 3 5 7 9
        q.pop();
    }

    return 0;
}