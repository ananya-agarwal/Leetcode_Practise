class Solution 
{
public:
    
    int strStr(string h, string n)
    {
        for(int i=0;i<h.length();i++)
        {
            if(h[i] == n[0] && h.substr(i, n.length()) == n)
                return i;
        }
        return -1;
    }
};