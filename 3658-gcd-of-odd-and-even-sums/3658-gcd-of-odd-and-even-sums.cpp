class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int odd_sum = 0;
        int even_sum = 0;

        for(int i=1;i <= n*2;i++){
            if(i % 2 == 0){
                even_sum += i;
            }
            else{
                odd_sum += i;
            }
        }
        return gcd(odd_sum,even_sum);
        
    }
};