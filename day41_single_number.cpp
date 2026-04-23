
// XOR wala logic lgega yaad h na same same zero aayega aur different number bchjayega array me 
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int result = 0;
            for(int num : nums){
                result ^= num;
            }
            return result;
        }
    };