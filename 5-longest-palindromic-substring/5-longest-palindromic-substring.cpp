/*
centre expansion approach:
1-1 karke sablo centre maano and expand it
even length case: 2 centres honge l and r but adjacent honge
odd length: 1 centre hoga bas i.e. same l and r
*/

#include<bits/stdc++.h>

class Solution {
public:
    
    void expand(string s, int l, int r, int &bestLeft, int &bestRight)
    {
        while(l>=0 && r<s.size() && s[l] == s[r])
        {
            l--;
            r++;
        }
          
        l++;
        r--;
        
        if(r-l+1 > bestRight-bestLeft+1)
        {
            bestRight = r;
            bestLeft = l;
        }
    }
    string longestPalindrome(string s)
    {
        int bestLeft=0;
        int bestRight=0;
        
        //odd
        for(int i=0;i<s.size();i++)
        {
            
            expand(s,i,i,bestLeft,bestRight);

            //even
            expand(s,i,i+1,bestLeft,bestRight);

        }
        
        return s.substr(bestLeft,bestRight-bestLeft+1);
    }
};