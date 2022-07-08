class Solution 
{
public:
    double myPow(double x, int n) 
    {
        long nn=abs(n);
        double ans=1.0;
        
        if(nn == 0)
            return 1;
        
        while(nn > 0)
        {
            if(nn%2==0)
            {
                x=x*x;
                nn = nn/2;
            }
            else
            {
                ans = x*ans;
                nn=nn-1;
            }
        }
        
        if(n<0)
            ans=1/ans;
        
        return ans;
    }
};

//brute force
// int t=abs(n);
        
// double ans=1.0;
// for(int i=0;i<t;i++)
// {
//     ans *= x;
// }

// if(n<0)
//     ans=1/ans;

// return ans;

//edge case: if n=INT_MIN toh if u convert it to postve number it will be INT_MAX+1 and bcs of that +1, it will be out of the range so we took ans in double

