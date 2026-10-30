class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {

        if(source == target){
            return 0;
        }

        int sum1 = accumulate(source.begin(),source.end(),0);
        int sum2 = accumulate(target.begin(),target.end(),0);
        int diff1 = source[0] - source[1];
        int diff2 = target[0] - target[1];

        if(sum1 % 2 == 0 && sum2 % 2 == 0 || sum1 % 2 == 1 && sum2 % 2 == 1){
            if(sum1 == sum2 || diff1 == diff2){
                return 1;
            }
            else{
                return 2;
            }
        }
        return -1;
        
    }
};