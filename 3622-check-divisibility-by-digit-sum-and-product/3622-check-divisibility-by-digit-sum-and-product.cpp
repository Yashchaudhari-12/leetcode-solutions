class Solution {
public:
    bool checkDivisibility(int n) {

        int og_n = n;
        int num = 1;
        int digit_sum = 0;

        while(n != 0){
            num = (n % 10) * num;
            digit_sum = (n % 10) + digit_sum;
            n = n/10;
        }
        int final_sum = digit_sum + num;
        
        if(og_n % final_sum == 0){
            return true;
        }
        return false;
    }
};