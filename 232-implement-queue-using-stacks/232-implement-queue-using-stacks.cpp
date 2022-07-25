class MyQueue
{
    stack<int> st, a;
    public:

    void push(int x) 
    {
        while(!st.empty())
        {
            int t=st.top();
            st.pop();
            a.push(t);
        }
        
        a.push(x);
        
        while(!a.empty())
        {
            int t=a.top();
            a.pop();
            st.push(t);
        }
    }
    
    int pop()
    {
        int res=st.top();
        st.pop();
        return res;
    }
    
    int peek() 
    {
        return st.top();
    }
    
    bool empty()
    {
        return st.empty();
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