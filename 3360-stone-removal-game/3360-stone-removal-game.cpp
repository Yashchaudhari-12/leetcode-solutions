class Solution {
public:
    bool canAliceWin(int n) {
        int i = 10;
        int cnt = 0;

        while(n >= i){
            n -= i;
            cnt++;
            i--;
        }

        if(cnt % 2 == 0){
            return false;
        }
        return true;
        
    }
};