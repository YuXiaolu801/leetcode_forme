/*
1
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string com_pre = strs[0];//选取vector里的第一个字符串为最长前缀
	for (int i = 1; i < strs.size(); i++)//扫描vector里的各个字符串，与com_pre比较
	{//第一个字符串没必要再和com_pre比较
		for (int j = 0; j < strs[i].size()||strs[i].size()==0; j++)
		{//挨个比较
			if (strs[i].size()==0)
			{
				return "";
			}
			if (com_pre[j]!=strs[i].at(j))//不相等的那一位字符
			{
				com_pre = com_pre.substr(0, j);//截取从0开始的j位字符
				break;//截取完就可以操作下一字符串
			}
			if (j== strs[i].size()-1)//比如ab和a，扫描完a，也要进行截取操作
			{
				com_pre = com_pre.substr(0, j+1);//截取从0开始的j+1位字符
				break;
			}
		}

	}
	return com_pre;
    }
};
/*
2
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string com_pre = strs[0];
	for (int i = 0; i < strs.size(); i++)
	{
		for (int j = 0; j < strs[i].size()|| strs[i].size()==0; j++) {
			//cout << com_pre[j] << " : " << strs[i].at(j) << endl;
			if (strs[i].size()==0)
			{
				return "";
			}
			if (com_pre[j] != strs[i].at(j)) {
				com_pre = com_pre.substr(0, j );
				break;
			}
            if ( j == strs[i].size()-1)
			{
				com_pre = com_pre.substr(0, j+1);
				break;
			}
		}
	}
	return com_pre;
    }
};
