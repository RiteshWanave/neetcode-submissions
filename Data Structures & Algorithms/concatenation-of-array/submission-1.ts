class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    getConcatenation(nums: number[]): number[] {
        let ans: number[] = nums;
        ans = ans.concat(nums);
        return ans;
    }
}
