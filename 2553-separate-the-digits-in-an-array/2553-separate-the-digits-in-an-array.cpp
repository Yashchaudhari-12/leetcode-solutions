class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        

        for(int i=0;i<n;i++){
            int a = nums[i];
            vector<int> temp;
            while(a != 0){
                int digit = a%10;
                temp.push_back(digit);
                a = a/10;
            }
            reverse(temp.begin(),temp.end());
            ans.insert(ans.end(),temp.begin(),temp.end());
        }
        return ans;
    }
};