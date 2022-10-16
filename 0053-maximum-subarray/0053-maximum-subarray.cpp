class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int sum=0,mx_sum=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mx_sum=max(sum,mx_sum);
            if(sum<0) sum=0;
        }
        return mx_sum;
    }
};
