// #include<stack>

// class Solution
// {
// public:
//     string reverseWords(string s) 
//     {
//         s+=" ";
//         string temp="", ans="";
//         stack<string> st;
//         int n=s.size();
        
//         for(int i=0;i<n;i++)
//         {
//             if(s[i] == ' ')
//             {
//                 st.push(temp);
//                 temp="";
//             }
//             else
//                 temp += s[i];
//         }

//         while(!st.empty())
//         {
//             string c=st.top();
//             ans = ans+c+" ";
//             st.pop();
//         }
        
//         ans.pop_back();
//         return ans;
//     }
// };


class Solution {
public:
    string reverseWords(string s) 
    {
        stack<string>st;
        string str = "";
        
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] != ' ' )
            {
                str += s[i];
                //continue;
            }
            else
            {
                if(str!="")
                   st.push(str);
                str="";
            }
        }
        
        if(str!="")
        {
            st.push(str);
        }
        
        string ans ="";
        while(!st.empty())
        {
            ans += st.top() + " ";
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};