class Solution {
public:
    int findTheDistanceValue(vector<int>& nums1, vector<int>& nums2, int d) {

        int cnt = 0;
        int n = nums1.size();
        int m = nums2.size();

        for(int i=0;i<n;i++){
            bool flag = false;
            for(int j = 0;j<m;j++){
                if(abs(nums1[i] - nums2[j]) <= d){
                    flag = true;
                    break;
                } 
            }
            if(flag == false){
                cnt++;
            }
        }
        return cnt;
        
    }
};