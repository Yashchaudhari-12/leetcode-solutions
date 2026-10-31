class Solution {
public:
    bool checkRecord(string s) {

        int a = 0;
        int l = 0;
        int n = s.size();
        bool flag = false;

        for(int i=1;i<=n;i++){
            if(s[i-1] == 'A'){
                a++;
            }
            if(s[i-1] == 'L' && s[i] == 'L' && s[i+1] == 'L'){
                flag = true;
            }
        }
        if(a < 2 && flag == false){
            return true;
        }
        return false;
        
    }
};