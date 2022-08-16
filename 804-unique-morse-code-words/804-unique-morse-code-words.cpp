class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        string code[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
							"-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
							"...-",".--","-..-","-.--","--.."};

		map<string, int> mp;
		int ans = 0;

		for(string i : words)
        {
			string s = "";
			for(char rt : i)
				s += code[rt - 97];
            //code ke andar ab c-a say 2 aarha ha that is c ke liye 2nd index vale se elemnts uthao
			
            //agar koi abhi bhi first time aarha ha toh we will not insert it into hashmap
            //and use count nahi krnege
            
			if(mp[s]++ == 0) 
				ans++;
		}
		return ans;
    }
};