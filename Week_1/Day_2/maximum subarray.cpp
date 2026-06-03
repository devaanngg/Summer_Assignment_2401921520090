class Solution {
public:
   int maxSubArray(vector<int>& nums) {
       /* int res=nums[0];
        int n=nums.size(); 
        for(int i=0;i<n;i++)
        {
            int curSum=0;
            for (int j=i;j<n;j++)
            {
                curSum=curSum+nums[j];
                res=max(res,curSum);
            }
        }
    return res;*/
//optimed approach kadane 
    int res=nums[0];
    int maxEnding=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        maxEnding=max(nums[i],maxEnding+nums[i]);
        res=max(maxEnding,res);
    }
    
    return res;
    }
};
