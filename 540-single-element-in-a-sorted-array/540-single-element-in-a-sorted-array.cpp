class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
        int elem=0;
        for(int i=0;i<nums.size();i++)
        {
            elem = elem^nums[i];
        }
        return elem;
    }
};

//method1: agar sab elmnt ke sath XOR krte jo toh 2 baar same number se XOR krne pr vapas inital number aajata ha and smthng XOR with 0 gives that number back