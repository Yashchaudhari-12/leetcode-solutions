class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        int n = nums.size();
        vector<int> pf;
        long long sum = 0;
        int mx = 0;

        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            int temp = gcd(nums[i],mx);
            pf.push_back(temp);
        }
        sort(pf.begin(),pf.end());
        int start = 0,end = pf.size()-1;
        while(start < end){
            sum += gcd(pf[start],pf[end]);
            start++;
            end--;
        }
        return sum;
    }
};