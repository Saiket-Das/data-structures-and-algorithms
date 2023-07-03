/*
  Implement Queue using Stacks
  Problem link: https://leetcode.com/problems/implement-queue-using-stacks/
*/

class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> newS;
        int frontValue;

        while (!s.empty()) {
            int val = s.top();
            s.pop();
            if (s.empty()) {
                frontValue = val;
                break;
            }
            newS.push(val);
        }
        while(!newS.empty()) {
            s.push(newS.top());
            newS.pop();
        }
        return frontValue;
    }
    
    int peek() {
        stack<int> newS;
        int frontValue;

        while (!s.empty()) {
            int val = s.top();
            s.pop();
            if (s.empty()) {
                frontValue = val;
            }
            newS.push(val);
        }
        while(!newS.empty()) {
            s.push(newS.top());
            newS.pop();
        }
        return frontValue;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */