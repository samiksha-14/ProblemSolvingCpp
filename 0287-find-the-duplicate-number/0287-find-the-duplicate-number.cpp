class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        //since there is a duplicate number then there will always be a cycle 
        //no doubt , so first find the point at which the both pointers meet
        //in the cycle the you can find the starting of cycle(duplicate num)
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }
};