class Solution {
public:
    int specialArray(vector<int>& nums) {

        int n = nums.size();

        for(int i=1;i<=n;i++){
            int x = i;
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(nums[j] >= x){
                    cnt++;
                }
            }
            if(cnt == x){
                return x;
            }
        }
        return -1;
        
    }
};