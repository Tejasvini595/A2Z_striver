class Solution 
{
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int left=1;
        int l= piles.size();
        int mx;
        mx= *max_element(piles.begin(), piles.end());

        int right= mx, c=0;
        while(left<right)
        {
            int mid= left+(right-left)/2;
            c=0;
            for(int i=0;i<l;i++)
            {
               c += std::ceil(piles[i] / (double)mid); 
            }
            if(c<=h)
            right=mid;
            else
            left= mid+1;
        }

        return left; 
    }
};

