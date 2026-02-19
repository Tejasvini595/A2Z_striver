class Solution 
{
public:
    vector<int> selectionSort(vector<int>& nums) 
    {
      
        for(int j=0;j<nums.size()-1;j++)//j=0
        {
            int mn= INT_MAX, ind=0;
            for (int i=j;i<nums.size();i++)//i=2
            {
                if(nums[i]<mn)//1
                {
                    mn= min(mn, nums[i]);//1
                    ind=i;//2
                }
            }
            int temp= nums[ind];//1
            nums[ind]= nums[j];//7
            nums[j]= temp;//1
        }
    }
};
