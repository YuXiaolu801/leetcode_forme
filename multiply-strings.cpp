class Solution {
public:
    string addop(string num1, string num2) {
	vector<string>v;
	int weight = 0;
    int vsize = max(num1.size(),num2.size());
    while (vsize > num1.size()) {
		num1 = "0" + num1;
	}
	while (vsize > num2.size()) {
		num2 = "0" + num2;
	}
	if (num1==""&&num2.size()!=0)
	{
		return num2;
	}
	if (num2 == "" && num1.size() != 0)
	{
		return num1;
	}
	if (num2==""&&num1=="")
	{
		return "0";
	}
	for (int i = num1.size() - 1; i >= 0; i--) {
		int ans = (num1[i] - '0') + (num2[i] - '0') + weight;
		weight = ans / 10;
		stringstream ss, ss1;
		ss << ans % 10;
		v.push_back(ss.str());
		if (i == 0&&weight!=0)
		{
			ss1 << weight;
			v.push_back(ss1.str());
		}
	}
	reverse(v.begin(), v.end());
	string as;

	for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << *it << " ";
		as += *it;
	}
	return as;
}
string multiply(string num1, string num2) {
	vector<string>v;
	string answer;
	v.push_back("#");
	for (int i = num1.size() - 1; i >= 0; i--) {
		int weight = 0;
		for (int j = num2.size() - 1; j >= 0; j--) {
			int ans= (num1[i] - '0') * (num2[j] - '0') + weight;
			weight = ans / 10;
			stringstream ss,ss1;
			ss << ans % 10;
			v.push_back(ss.str());
			if (j == 0&&weight!=0)
			{
				ss1 << weight;
				v.push_back(ss1.str());
			}
		}
		v.push_back("#");

	}
	reverse(v.begin(), v.end());
	vector<string>vs;
	string s1("");

	for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
	{
		if (*it!="#")
		{
			s1 += *it;
		}
		if (*it=="#"&&s1!="")
		{
			vs.push_back(s1);
			s1 = "";
		}
	}
	int vsize = 0;
	for (int i = 0; i < vs.size(); i++)
	{
		if (vsize<vs[i].size())
		{
			vsize = vs[i].size();
		}
	}
	for (int i = 0; i < vs.size(); i++)
	{
		int j = vs.size() - i-1;
		string temp("");
		string temp1 = temp;
		while (j)
		{
			temp += "0";
			j--;
		}
		vs[i] += temp;
		if (vs[i].size()>vsize)
		{
			vsize = vs[i].size();
		}
		if (vs[i].size() < vsize)
		{
			int k = vsize - vs[i].size();
			while (k > 0)
			{
				temp1 = "0" + temp1;
				k--;
			}
			vs[i] = temp1 + vs[i];
		}
	}
	for (int i = 0; i < vs.size(); i++)
	{
		answer=addop(vs[i], answer);
	}
    int zeronum = 0,lxznum=0;
	while (zeronum<answer.size())
	{
        if (answer[zeronum] != '0')
		{
			break;
		}
		if (answer[zeronum]=='0')
		{
			lxznum++;
		}
        
        zeronum++;
	}
    answer.erase(0,lxznum);
    
	if (answer=="")
	{
		answer = "0";
	}
	return answer;
}
};
