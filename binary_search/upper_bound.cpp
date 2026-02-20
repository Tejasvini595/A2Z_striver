class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int len= arr.size();
        int l=0, r= len-1;
        int found= len;
        
        while(l<=r)
        {
            int mid= l+(r-l)/2;
            if(arr[mid]>target)
            {
                found= mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        
        return found;
    }
};
