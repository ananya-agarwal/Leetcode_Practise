class Solution 
{
public:
    
    int kthGrammar(int n, int k)
    {
        if(n==1 && k==1)
            return 0;
        
        int mid=pow(2,n-1)/2;
        if(k<=mid)
            return kthGrammar(n-1,k);
        else
            return !kthGrammar(n-1,k-mid);
    }
};

//ek trh se n rows me, k=1/2/3...th column vala elemnt print krna ha
//so actually we need to return nth row and kth column vala element

//approach: at each row, size of the next row becomes double (2^0, 2^1....)
//har row ke mid tak ka ans is same prev row ka ans and mid ke baad vala second half is the complment of the prev row
//prev row ka index+mid se current row ka secnd half strt hoga
//n and k 1 based indexing ha 