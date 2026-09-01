class Solution {
public:

    bool is_possible(long long n,long long x){

        if(n * n <= x){
            return true;
        }
        return false;
    }
    int mySqrt(long long x) {

        long long low = 0,high = x;
        long long ans = 1;

        while(low <= high){
            long long mid = (low + high)/2;

            if(is_possible(mid,x) == true){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans; 
        
    }
};