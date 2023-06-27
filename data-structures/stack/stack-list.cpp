#include<bits/stdc++.h>
using namespace std;

class myStack {
    public: 
        list<int> l;

        void push (int v){
            l.push_back(v);
        }
        void pop (){
            l.pop_back();
        }
        int top (){
            return l.back();
        }
        int size (){
            return l.size();
        }
        bool empty (){
            if (l.size() == 0) return true;
            else               return false;
        }
};

int main () {

    // Stack Implement using List

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

    return 0;
}