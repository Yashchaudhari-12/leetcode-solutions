class Solution {
public:
    int scoreDifference(vector<int>& nums) {

        int player1 = 0,player2 = 0;
        int n = nums.size();
        bool one = true;

        for(int i=0;i<n;i++){
            if(nums[i] % 2 == 1){
                one = !one;
            }
            if(i % 6 == 5){
                one = !one;
            }
            
            if(one == true){
                player1 += nums[i];
            }
            else{
                player2 += nums[i];
            }
        }
        return player1 - player2;
        
    }
};