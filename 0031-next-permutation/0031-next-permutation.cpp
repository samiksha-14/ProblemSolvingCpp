class Solution {
public:
    void nextPermutation(vector<int>& arr) {
    int N=arr.size();
        int req_element;
        int req_idx=-1;
        for(int i=N-1;i>=1;i--){
            if(arr[i]>arr[i-1]){
                //this is the peak element
                //element prior to this will be out required element
                req_element=arr[i-1];
                req_idx=i-1;
                break;
            }
        }
        //now we will find just greater element to that element
        if(req_idx!=-1){
        for(int i=N-1;i>req_idx;i--){
            if(arr[i]>req_element){
                swap(arr[i],arr[req_idx]);
                break;
            }
        }}
        //now we will reverse the rest of the list
        reverse(arr.begin()+1+req_idx, arr.begin()+N);
        
    }
};