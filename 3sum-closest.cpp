/*
method1
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int v = 9999999;
	int left = 0, right = nums.size() - 1, ans = 0;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); i++)
	{
		for (left = i + 1, right = nums.size() - 1; left < right;) {
			ans = nums[left] + nums[right] + nums[i];

			if (ans == target) {
				return ans;
			}
			if (abs(ans - target) <= abs(v - target))
			{
				v = ans;
			}
			if (ans < target ) {
				left++;
				
			}
			if (ans > target ) {
				right--;
			}
		}
		
	}
	return v;
    }
};

/*
method2
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int max = 9999999;
	int left = 0, right = nums.size()-1, ans = 0;
	sort(nums.begin(), nums.end());//对nums重排序，变为-4，-1，1，2
	for (int i = 0; i < nums.size(); i++)
	{
		for (left = i + 1, right = nums.size() - 1; left < right;) {//双指针
			//cout << left << " " << right << endl;
			//cout << nums[left] << " " << nums[right] << " " << nums[i] << endl;
			ans = nums[left] + nums[right] + nums[i];
			if (ans==target)
			{
				return ans;
			}
			if (ans < target) {
				left++;//数组已排好序，如果和小，则试着左指针右移动
			}
			if (ans>target)
			{
				right--;//数组已排好序，如果和大，则试着右指针左移动
			}
			if (abs(ans-target)<=abs(max-target))//距离target更近
			{
				max = ans;
			}
		}
	}
	return max;//closest answer
    }
};
