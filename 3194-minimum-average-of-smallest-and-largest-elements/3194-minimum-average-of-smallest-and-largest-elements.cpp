class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        vector<float> ans;
        int n = nums.size();

        while(n != 0){
            int max_elem = *max_element(nums.begin(),nums.end());
            int min_elem = *min_element(nums.begin(),nums.end());

            double average = (max_elem + min_elem)/2.00;
            ans.push_back(average);

            nums.erase(find(nums.begin(),nums.end(),min_elem));
            nums.erase(find(nums.begin(),nums.end(),max_elem));

            n -= 2;
        }
        double min_e = * min_element(ans.begin(),ans.end());
        return min_e;
        
    }
};