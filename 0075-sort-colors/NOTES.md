```
class Solution {
public:
void sortColors(vector<int>& nums) {
//     int numszero=0;
//     int numsone=0;
//     int i;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]==0)
//             numszero++;
//         else if(nums[i]==1)
//             numsone++;
//     }
//     i=0;
//     for(;i<numszero;i++)
//         nums[i]=0;
//     for(;i<numsone+numszero;i++)
//         nums[i]=1;
//     for(;i<nums.size();i++)
//         nums[i]=2;
// }
///next approach would be of dutch national flag algorithm
//the main focus would be mid pointer in this
int low=0;//points to 0 always
int mid=0;//this will point to 1
int n=nums.size();