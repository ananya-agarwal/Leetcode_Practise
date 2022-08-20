class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        int n=people.size(),i=0,j=n-1,count=0;
        sort(people.begin(), people.end());
        
        while(i<=j)
        {
            int sum=people[i] + people[j];
            
            if(sum <= limit)
            {
                count++;
                i++;
                j--;
            }
            
            else
            {
                count++;
                j--;
            }
        }
        
        return count;
    }
};

//har boat me 1/2 hi bande baitha sakte ha
//min number of boats kitne lagegi ki har banda boat me baith jaaye
//but har boat me ek limit tak hi weight allowed ha

//2 cases ha:
//sort krdo array and 1 bhari vale ko and ek halke vale ko baithado 1 boat me 2 bande aapaye and no of boats kam lage
//agar 1 patle and 1 bhari vale ka weight milake zyda hojaye than limit then bhari vale ko baithado in the boat kyuki patle vale ki possblities zyada ha to et clubed with somebody else

