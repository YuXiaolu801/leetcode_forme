class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (auto iter = nums.begin(); iter != nums.end();)
	{
		//cout << *iter << endl;
		if (*iter==val)
		{
			iter = nums.erase(iter);
		}
		else {
			iter++;
		}
	}
	return nums.size();
    }
};
