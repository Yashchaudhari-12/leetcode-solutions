class Solution {
public:
    int minimumSum(int num) {

        vector<int> ans;

        while(num != 0){
            int temp = num % 10;
            ans.push_back(temp);
            num /= 10;
        }

        sort(ans.begin(),ans.end());

        int new1 = ans[0] * 10 + ans[2];
        int new2 = ans[1] * 10 + ans[3];
        return new1 + new2;
    }
};