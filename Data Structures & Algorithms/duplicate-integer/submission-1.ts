class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums: number[]): boolean {
        const freq = new Map<number, number>;
        for (const num of nums) {
            if (freq.get(num)) return true;
            freq.set(num, 1);
        }
        return false;
    }
}
