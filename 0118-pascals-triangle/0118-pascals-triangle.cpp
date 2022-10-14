class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>pascal(numRows);
        for(int i=0;i<numRows;i++){
            //each row of pascal triangle will contain one column more than the prev one
           pascal[i].resize(i+1);
            //first and last column will be 1
           pascal[i][0]=pascal[i][i]=1;
            for(int j=1;j<i;j++){
                //for rest of the columns
                pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
            }
        }
        return pascal;
       
    }
};