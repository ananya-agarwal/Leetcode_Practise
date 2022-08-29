class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        
        
//         unordered_map<int, int> m;
//         int change = 0;
        
//         for(int i = 0 ; i < bills.size(); i++)
//         {
//             m[bills[i]]++;
            
//             //sara kaam tabhi krna ha jab coin 5 ka na ho
//             if(bills[i] > 5)
//             {
//                 change = bills[i] - 5;
                
//                 if(change == 5)
//                 {
//                     if(m[5] > 0)
//                         m[5]--;
//                     else
//                         return false;
//                 }
                
                
//                 //change = 15
//                 else
//                 {
//                     if(m[10] > 0 and m[5] > 0)
//                     {
//                         m[10]--;
//                         m[5]--;
//                     }
//                     else if(m[5] >= 3)
//                         m[5] -= 3;
//                     else
//                         return false;
//                 }
                
                
//             }
//         }
        
//         return true;
        
        
        int five=0, ten=0;
        for(auto i:bills)
        {
            if(i==5) 
                five++;
            
            else if(i==10) 
            {
                five--;
                ten++;
            }
            
            else if(ten>0)
            {
                ten--; 
                five--;
            }
            
            else
                five -=3;
            
            if(five<0) return false;
        }
        return true;
    }
};