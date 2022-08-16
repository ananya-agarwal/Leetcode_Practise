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
			for(char c : i)
				s += code[c - 'a'];
			
			if(mp[s]++ == 0) 
				ans++;
		}
		return ans;
    }
};