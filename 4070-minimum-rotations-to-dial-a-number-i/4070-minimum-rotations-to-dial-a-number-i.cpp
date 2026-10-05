class Solution {
public:
    int minRotations(string s) {

        int ans = 0;
        int temp = 0;

        for(int i=0;i<s.size();i++){
            int curr = s[i] - '0';
            int dist = abs(curr - temp);

            ans += min(dist,10-dist);
            temp = curr;
        }
        return ans;
        
    }
};