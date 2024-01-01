class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;i++)
        {
            if(i==nums[i])
            {
               nums[i]=-1;
            }
            else
            {
                return i;
                break;
            }
            
        }
        
       return size;
    }
};
