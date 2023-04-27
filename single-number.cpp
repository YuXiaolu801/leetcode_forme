class Solution {
public:
    int singleNumber(vector<int>& nums) {
        	map<int, int>m;
	for (vector<int>::iterator it = nums.begin(); it !=nums.end(); it++)
	{
		m[*it]++;
	}
    int x=0;
	for (map<int,int>::iterator it = m.begin(); it !=m.end();it++)
	{
		if ((it->second) == 1) {
			x=it->first;
		}
	}
    return x;
    }
};
