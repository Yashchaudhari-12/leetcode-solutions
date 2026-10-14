class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& nums) {

        int n = nums.size();

        for(int i = 0;i<n;i++){
            int tallest = max_element(nums.begin()+i,nums.end())-nums.begin();
            swap(names[i],names[tallest]);
            swap(nums[i],nums[tallest]);
        } 
        return names;
        
    }
};