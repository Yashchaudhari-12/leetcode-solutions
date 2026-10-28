class Solution {
public:
    int minElement(vector<int>& nums) {

        vector<int> ans;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int a = nums[i];
            int sum = 0;

            while(a != 0){
                int digit = a%10;
                sum += digit;
                a = a/10;
            }
            ans.push_back(sum);
        }
        return *min_element(ans.begin(),ans.end());
        
    }
};