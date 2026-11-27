class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        for(int i=0;i<n;i++){
            int a = nums[i];
            int cnt = 0;
            while(a != 0){
                int digit = a % 10;
                cnt++;
                a /= 10;
            }
            if(cnt % 2 == 0){
                ans++;
            }
        }
        return ans;
        
    }
};