class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Brute force : With using two for loops to interate over all subarrays and
        // calculating their sum 
        // TC:O(n)
        // Optimized Soln
        //Kadane's algorithm
        //the  idea is to only consider a subarray until it is giving you
        //the positive sum and keep the max count. if you encounter a subaaray
        //giving you the neg sum just start considering the new subarray after
        //it by initializing sum as 0
        //tc O(n) space O(1)
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