class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int l= nums.size();
        unordered_map<int,int> visited;

        for(int i=0;i<l;i++)//7
        {
            int sec= target-nums[i];//2
            if (visited.find(sec)!= visited.end())
            {
                return {visited[sec],i};
            }
            visited[nums[i]]=i;//0
            
            
        }

        return {};

    }
};