class Solution {
public:
    static bool cmp(vector<int>a,vector<int>b){
        //vector<int>a=[1,3]
        //vector<int>b=[2,6]
        if(a[0]==b[0]) return a[1]>b[1];
        else  return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //first sort in ascending order with start time and if equal then in descending with end time
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>>res;
        vector<int>prev=intervals[0];
        for(int i=1;i<intervals.size();i++){
            //check for overlap
            if(intervals[i][0]<=prev[1] && intervals[i][1]>prev[1]){
                prev[1]=intervals[i][1];
            }
            //check for new interval change prev and push prev to result
            else if(intervals[i][0]>prev[1] && intervals[i][1]>prev[1]){
                res.push_back(prev);
                prev=intervals[i];
            }
        }
        res.push_back(prev);
        return res;
    }
};