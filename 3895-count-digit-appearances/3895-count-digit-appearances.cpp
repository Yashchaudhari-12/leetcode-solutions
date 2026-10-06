class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {

        int n = nums.size();
        int cnt = 0;

        for(int i=0;i<n;i++){
            int a = nums[i];

            while(a != 0){
                int di = a%10;
                if(di == digit){
                    cnt++;
                }
                a = a/10;
            }
        }
        return cnt;
        
    }
};