class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        	map<int, int>m;
	if (s.size()==0)
	{
		return 0;
	}
	for (int i = 0; i < s.size(); i++)
	{
        m[i]=0;
		for (int j = 1; i+j <= s.size(); j++)
		{
			string subs = s.substr(i, j);
			//cout << subs << endl;
			//cout << subs.find(s[i + j])<<endl;
			if (i + j < s.size())
			{
				if (subs.find(s[i + j]) < subs.size() && subs.find(s[i + j]) >= 0) {
					break;
					
				}
				else {
					m[i]++;
				}
			}
		}
	}
	int max = 0;
	//for (map<int,int>::iterator it = m.begin(); it!=m.end(); it++)
	//{
	//	cout << "key=" << (*it).first << " value=" << it->second << endl;
	//}
	//cout << endl;
	for (int i = 0; i < m.size(); i++)
	{
		if (max < m[i]+1)
		{
			max = m[i]+1;
		}
	}
	return max;
    }
};
