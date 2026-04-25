class Solution {
    public:
        int hammingWeight(uint32_t n) {
            int count = 0;
            while(n > 0){
                if(n & 1) count++;  // check last bit
                n = n >> 1;         // shift right
            }
            return count;
        }
    };
    