#include<bits/stdc++.h>
#include<string.h>

class Solution 
{
public:
    bool rotateString(string s, string goal) 
    {
        int n = s.size();
        
        for(int i = 0;i<n;i++)
        {
            if(s.substr(i,n)==goal) 
                return true;
            
            s+=s[i];
        }
        return false;
    }
};