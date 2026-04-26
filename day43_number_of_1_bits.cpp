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
    
// Alternative solution using Brian Kernighan’s Algorithm
// class Solution {
//     public:
//         int hammingWeight(uint32_t n) {
//             int count = 0;
//             while(n > 0){
//                 n = n & (n - 1); // clear the least significant bit set
//                 count++;
//             }
//             return count;
//         }
//     };      