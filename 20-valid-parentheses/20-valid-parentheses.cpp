class Solution
{
    stack<char> st;
    public:
    bool isValid(string s) 
    {
        if(s.empty())
            return false;
        
        for(auto i:s)
        {
            if(i == '(' || i == '{' || i == '[')
                st.push(i);
            else
            {
                if(st.empty())
                    return false;
                
                char t=st.top();
                if( (t=='(' && i == ')') || (t=='{' && i == '}') || (t=='[' && i == ']' ))
                   st.pop();
                else 
                    return false;
            }
        }
        return st.empty();
    }
};