class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //since both the arrays are sorted
        //so start from the end of both the arrays because they will be large
        //and whichever element is larger than both the elements will come at the end
        //of merged array
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(j>=0 && i>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }
            else
                nums1[k--]=nums2[j--];
        }
        //if all the elements of nums 2 are not exhausted
          while(j >= 0) {
          nums1[k--] = nums2[j--];
     }
    }
};