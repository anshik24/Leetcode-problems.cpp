class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum=max(nums[i],currsum+nums[i]);
            bestsum=max(bestsum,currsum);
        }
        return bestsum;
    }
};
