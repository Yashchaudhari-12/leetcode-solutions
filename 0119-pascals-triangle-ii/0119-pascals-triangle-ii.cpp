class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> ans;
        long long n = rowIndex + 1;
        ans.push_back(1);
        long long result = 1;

        for(int i = 1;i <= rowIndex;i++){
            result = result * (n - i);
            result = result/i;
            ans.push_back(result);
        }
        return ans;
    }
};