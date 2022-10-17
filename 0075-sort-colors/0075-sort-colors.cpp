class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            //if the num is 0
             if(nums[mid]==0) 
            {
             swap(nums[mid],nums[low]);
             low++;
             mid++;
             }
            //if the number is 2
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else
                //if the number is 1
                mid++;
        }
        
    }
};