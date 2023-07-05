/*
  Reverse Stack Using Recursion
  Problem Link: https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875
*/

void reverseStack(stack<int> &st) {
    
    if (st.empty()) retrun;
    
    int x = st.top();
    st.pop();

    reverseStack(st);
    stack<int> st_cpy;

    while(!st.empty()) {
        st_cpy.push(st.top());
        st.pop();
    }

    st_cpy.push(x);
    
    while(!st_cpy.empty()) {
        st.push(st_cpy.top());
        st_cpy.pop();
    }
}