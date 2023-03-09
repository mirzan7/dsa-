class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int totalelement=m*n;
        int starting_row=0;
        int ending_col=n-1;
        int ending_row=m-1;
        int starting_col=0;
        int count=0;
        while(count < totalelement)
        {
            //staring row
            for(int i = starting_col ; i <= ending_col && count < totalelement ; i++)
            {
                ans.push_back( matrix [ starting_row ][ i ] );
                count++;
            }
            starting_row++;

            //ending col
            for(int i=starting_row;i<=ending_row && count<totalelement;i++)
            {
                ans.push_back(matrix[i][ending_col]);
                count++;
            }
            ending_col--;

            //ending row
            for(int i=ending_col;i>=starting_col && count<totalelement;i--)
            {
                ans.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;

            //startng col
            for(int i=ending_row;i>=starting_row && count<totalelement;i--)
            {
                ans.push_back(matrix[i][starting_col]);
                count++;
            }
            starting_col++;  
        }
        return ans;    
    }
};