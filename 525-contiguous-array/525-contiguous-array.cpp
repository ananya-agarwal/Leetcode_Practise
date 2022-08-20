class Solution {
public:
    int findMaxLength(vector<int>& arr){
        unordered_map<int,int> mp;
        int length = 0;
        int sum = 0;
        mp[0] = -1;
        int N = arr.size();
        
        for(int i=0;i<N;i++){
            if(arr[i] == 0){
                sum = sum - 1;
            }
            else{
                sum = sum + arr[i];
            }
            
            if(mp.find(sum) != mp.end()){
                int temp = i - mp[sum];
                length = max(temp,length);
            }
            else{
                mp[sum] = i;
            }
            
        }
        
        return length;
    }
};

//treat 0s as -1 and 1s as +1 only
//agar starting ke 3 elemnts ka sum bhi 5 ha and strtng ke 10 elemnts ka sum bhi 5 that means unn 7 elemnts me equal no of 0s and 1s the tabhi +1 and -1 ke kaard sum same hi rha

//hashmap of sum vs index ki kis index tak kya sum aarkha ha and we will look ki kaha pr jaake sum ki value is repeating
//agar voh vala sum phle aaya ha so we will index uska and length nikalnge by subtrctng currnt index and 
//voh vala index 
//if curnt length > glbl length, update glbl length to this crrnt length