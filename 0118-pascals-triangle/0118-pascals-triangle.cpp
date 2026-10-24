class Solution {
public:

    vector<int> generate_row(int n)
    {
        vector<int> ans;
        int result = 1;
        ans.push_back(1);
        for(int col = 1;col<n;col++){
            result = result * (n-col);
            result = result/col;
            ans.push_back(result);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> final_triangle;

        for(int i=1;i<=numRows;i++){
            final_triangle.push_back(generate_row(i));
        }
        return final_triangle;
        
    }
};