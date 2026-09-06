class Solution {
   public:
    int trap(vector<int>& height) {
        int l = 0, r = 1, n = height.size();
        int ans = 0;
        int neg = 0;
        while (r < n && l < n) {
            if (height[r] >= height[l]) {
                cout << l << " " << r << " " << neg << endl;
                ans += (min(height[l], height[r]) * (r - l - 1)) - neg;
                cout << ans << endl;
                neg = 0;
                l = r;
                r++;
            } else {
                neg += height[r];
                r++;
            }
        }
        r = n-1; l = n-2; neg = 0;
        while (r >=0 && l >= 0) {
            if (height[l] > height[r]) {
                cout << l << " " << r << " " << neg << endl;
                ans += (min(height[l], height[r]) * (r - l - 1)) - neg;
                cout << ans << endl;
                neg = 0;
                r = l;
                l--;
            } else {
                neg += height[l];
                l--;
            }
        }
        return ans;
    }
};
