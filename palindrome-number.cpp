class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
		return false;
	}
	if (x == 0) {
		return true;
	}
	vector<int> num;
	int i = 0;
	while (x)
	{
		num.push_back(x % 10);
		x = x / 10;
	}
	if (num.size() == 1) {
		return true;
	}
	vector<int>::iterator it = num.begin(), is = --num.end();
	for (; it<=is&&is != num.begin() && it != num.end(); it++, is--)
	{
		cout << *it << " " << *is << endl;
		if (*it != *is) {
			return false;
		}
	}
	return true;
    }
};
