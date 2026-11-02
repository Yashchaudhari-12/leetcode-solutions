class Solution {
public:
    bool consecutiveSetBits(int n) {

        string binary = "";
        int cnt = 0;

        while(n > 0){
            binary += char('0' + n%2);
            n /= 2;
        }

        reverse(binary.begin(),binary.end());

        for(int i=0;i<binary.size();i++){
            if(binary[i] == '1' && binary[i+1] == '1'){
                cnt++;
            }
        }
        if(cnt == 1){
            return true;
        }
        return false;
        
    }
};