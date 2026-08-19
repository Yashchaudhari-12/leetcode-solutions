class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int largest = m-1;
        int smallest = 0;

        while(smallest < n && largest >= 0){
            if(nums1[largest]>nums2[smallest]){
                swap(nums1[largest],nums2[smallest]);
                largest--;
                smallest++;
            }
            else{
                break;
            }
        }

        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());

        for(int i = m;i<m+n;i++){
            nums1[i] = nums2[i-m];
        }
        
    }
};