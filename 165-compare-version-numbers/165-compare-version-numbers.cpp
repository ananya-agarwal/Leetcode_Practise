class Solution {
public:
    int compareVersion(string v1, string v2) 
    {
        int i=0,j=0,v1len=v1.size(),v2len=v2.size(),n1,n2;
        while(i<v1len || j<v2len)
        {
            n1=0;
            n2=0;
            
            while(i<v1len && v1[i]!='.')
            {
                n1 = n1*10 + (v1[i]-'0');
                i++;
            }

            while(j<v2len && v2[j]!='.')
            {
                n2 = n2*10 + (v2[j]-'0');
                j++;
            }
          
            if(n1<n2)
                return -1;
            if(n1>n2)
                return 1;
            i++;
            j++;
        }
        return 0;
    }
};

//here length me or laga ha kyuki say ek version ki length kam thi and doosri ki abhi bachi ha so vahn pr .0 aajeyga kyuki n1 and n2 are 0 initially and we r looping till we get . and extrct number jo uske phle likha ha and we can cmpre the 2 number.
//agar phle hi numbers me unequlty show hogayi toh we can return -1 and 1 accordingly varna last me ekdum 0 returned means numbers are equal

//last me i++ and j++ bcs crrntly they are at .