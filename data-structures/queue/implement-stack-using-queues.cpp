/*
  Implement Stack using Queues
  Problem Link: https://leetcode.com/problems/implement-stack-using-queues/
*/


class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> newQ;
        int lastValue;
        while(!q.empty()) {
            int val = q.front();
            q.pop();
            if (q.empty()) {
                lastValue = val;
                break;
            }
            newQ.push(val);
        }
        q = newQ;
        return lastValue;
    }
    
    int top() {
        queue<int> newQ;
        int lastValue;
        while(!q.empty()) {
            int val = q.front();
            q.pop();
            if (q.empty()) {
                lastValue = val;
            }
            newQ.push(val);
        }
        q = newQ;
        return lastValue;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */