class Solution {
public:
    int reverseBits(int n) {

        string a = bitset<32>(n).to_string();
        reverse(a.begin(),a.end());
        int b = stoi(a,nullptr,2);
        
        return b;
        
    }
};