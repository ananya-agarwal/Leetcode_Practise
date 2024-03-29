class Solution 
{
    public:
    string countAndSay(int n, string s="1") 
    {
        if(n==1)
            return s; 
        
        int i=0, j, len = s.size(); 
        string res = ""; 

        while(i<len) 
        {
            j=i; 

            while(i<len && s[i]==s[j]) 
                i++;
            res += to_string(i-j) + s[j];
        }
        return countAndSay(n-1, res);
    }
};


//1,2,3...n times tak we need to perform this operation  
//in owrst case, it is possible that each number is unique
//and 1-1 krke we are moving in the sequence