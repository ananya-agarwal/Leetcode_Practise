class StockSpanner 
{
    
public:
    
    stack<pair<int,int>> st;
    
    StockSpanner()
    {
        
    }
    
    int next(int price)
    {
        int c=1;
        while(!st.empty() && st.top().first <= price)
        {
            c += st.top().second;
            st.pop();
        }
        st.push({price, c});
        
        return c;
    }
    
   // uss element ke left pr jaaek dekhe ki current elemnt se bada elemnt kab aaya tha and ans for that elemnt will be diff of indices of both
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */


