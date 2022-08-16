class Solution {
public:
	string sortString(string s) {

		unordered_map<char, int> mp;

		for(auto i : s){
			mp[i]++;
		}

		string ans = "";

		bool found = true;
		while(found){

			found = false;
			// For steps 1,2,3
			for(char c='a' ; c<='z' ; c++){
				if(mp[c]){
					ans.push_back(c);
					mp[c]--;
					found= true;
				}
			}

			// For steps 4,5,6
			for(char c='z' ; c>='a' ; c--){
				if(mp[c]){
					ans.push_back(c);
					mp[c]--;
					found= true;                    
				}
			}
		}
		return ans;
	}
};