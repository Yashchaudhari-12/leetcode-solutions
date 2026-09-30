class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size();
        int m = word2.size();

        string s,a;


        for(int i=0;i<n;i++){
            s += word1[i];
        }
        for(int i=0;i<m;i++){
            a += word2[i];
        }

        int b = s.size();

        if(b != a.size()){
            return false;
        }
        for(int i=0;i<b;i++){
            if(s[i] != a[i]){
                return false;
            }
        }
        return true;
        
        
    }
};