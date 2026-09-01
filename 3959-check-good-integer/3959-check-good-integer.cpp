class Solution {
public:
    bool checkGoodInteger(int n) {

        int og_n = n;
        int digit_sum = 0;
        int square_sum = 1;

        while(n != 0){
            int digit = n % 10;
            digit_sum += digit;
            n = n/10;
        }

        while(og_n != 0){
            int sq = og_n % 10;
            square_sum += sq * sq;
            og_n = og_n / 10;
        }
        if(square_sum - digit_sum >= 50){
            return true;
        }
        return false;
    }
};