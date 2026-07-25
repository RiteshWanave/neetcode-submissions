class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int start1 = 0;
        int start2 = m+n;
        for(auto num: nums2) nums1.push_back(num);
        nums2.clear();
        while (start1 >= 0 && start1<m && start2<nums1.size()) {
            if (nums1[start1]<nums1[start2]) {
                nums2.push_back(nums1[start1]);
                start1++;
            } else {
                nums2.push_back(nums1[start2]);
                start2++;
            }
        }
        while (start1 >=0 && start1<m) {
            nums2.push_back(nums1[start1]);
            start1++;
        }
        while (start2<nums1.size()) {
            nums2.push_back(nums1[start2]);
            start2++;
        }
        nums1 = nums2;
    }
};