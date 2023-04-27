class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
	int ans = 0, left = 0,right=size-1;
	while (left < right) {
		if (height[left] < height[right]) {
			ans = max(ans, (right - left) * height[left]);
			left++;
		}
		else {
			ans = max(ans, (right - left) * height[right]);
			right--;
		}
	}
	return ans;
    }
};
