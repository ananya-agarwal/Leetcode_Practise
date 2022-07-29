class Solution {
public:
    int myAtoi(string str)
    {
        int i=0,n=str.length();

        while(str[i]==' ')
            i++;

        int flag=0;// To check weather the integer is positive or negitive 
        long long int sum=0;//To over come the overflow problem if you use int it may overflow 

        if(str[i]=='-')
        {
            flag=1;
            i++;
        }

        if(str[i]=='+' && flag == 0)//To overcome test case like '-+42'
            i++;

        //"-+42": sum = 0, flag=1
                //sum=0, flag=1, seedha bahar aakr ans is -(sum) = -(0) = 0
        //"+42": 42 aata ans
        
        
       while(i<n && str[i]>='0' && str[i]<='9')
       {
           sum = sum * 10 + (str[i]-'0');

           if(sum>INT_MAX && flag==0) //sum pr sirf numerical value ha, sign toh flag pr ha
                return INT_MAX;
           if(-sum<INT_MIN && flag==1)
                return INT_MIN;

            i++;
       }

        if(flag==1)
            return -sum;

        return sum;
    }

};

    