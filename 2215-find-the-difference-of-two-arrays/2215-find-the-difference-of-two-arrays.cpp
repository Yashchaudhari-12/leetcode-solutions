class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> temp1;

        for(int i=0;i<n;i++){
            bool flag = true;
            for(int j=0;j<m;j++){
                if(nums1[i] == nums2[j]){
                    flag = false;
                }
            }
            if(flag == true){
                temp.push_back(nums1[i]);
            }
        }

        set<int> s(temp.begin(),temp.end());
        ans.push_back(vector<int>(s.begin(), s.end()));

        for(int i=0;i<m;i++){
            bool flag = true;
            for(int j=0;j<n;j++){
                if(nums2[i] == nums1[j]){
                    flag = false;
                }
            }
            if(flag == true){
                temp1.push_back(nums2[i]);
            }
        }
        set<int> s1(temp1.begin(),temp1.end());

        ans.push_back(vector<int>(s1.begin(), s1.end()));
        return ans;

        
    }
};