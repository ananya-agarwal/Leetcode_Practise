class Solution {
public:
    string defangIPaddr(string address) 
    {
        int l=address.length();
        string s;
        
        for(int i=0;i<l;i++)
        {
            if(address[i] == '.')
            {
                s = s+"[.]";
                // s = s+".";
                // s = s+"]";
            }
              
            else
                s = s+address[i];
        }
        return s;
    }
};