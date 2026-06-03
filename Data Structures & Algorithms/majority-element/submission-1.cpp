class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        for (int num: nums) {
            int watch;
            int count=0;
            for (int num: nums) {
                if (!count) {
                    watch = num;
                    count = 1;
                } else if (num!=watch) {
                    count--;
                } else count++;
            }
            return watch;
        }
    }
};