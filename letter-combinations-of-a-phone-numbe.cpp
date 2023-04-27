/*1*/
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string arr[10];
	arr[0] = "";
	arr[1] = "";
	arr[2] = "abc";
	arr[3] = "def";
	arr[4] = "ghi";
	arr[5] = "jkl";
	arr[6] = "mno";
	arr[7] = "pqrs";
	arr[8] = "tuv";
	arr[9] = "wxyz";
	vector<string>ans;
	if (digits=="")
	{
		return ans;
	}
	vector<vector<string>>vv;
	int ssize = digits.size();
	map<int, string>m;
	vector<string>v1;
	for (int i = 0; i < ssize; i++)
	{
		//cout << digits[i]-48 << endl;//'2'-48=2
		//v1.push_back(to_string(arr[digits[i] - 48].size()));
		for (int j = 0; j < arr[digits[i] - 48].size(); j++)
		{
			stringstream ss;
			ss << arr[digits[i] - 48][j];
			string str = ss.str();
			v1.push_back(str);
		}
		vv.push_back(v1);
		v1.erase(v1.begin(), v1.end());
	}
	vector<vector<string>>::iterator it = vv.begin();

	for (vector<string>::iterator is = (*it).begin(); is != (*it).end(); is++) {
		if (it+1!=vv.end())
		{
			for (vector<string>::iterator ir = (*(it + 1)).begin(); ir != (*(it + 1)).end(); ir++)
			{
				if (it+2!=vv.end())
				{
					for (vector<string>::iterator iq = (*(it + 2)).begin(); iq != (*(it + 2)).end(); iq++)
					{
						if (it+3!=vv.end())
						{
							for (vector<string>::iterator ip = (*(it + 3)).begin(); ip != (*(it + 3)).end(); ip++)
							{
								//cout << (*is)+(*ir)+(*iq)+(*ip) << " ";
								ans.push_back((*is) + (*ir) + (*iq) + (*ip));
							}
						}
						else {
							//cout << (*is) + (*ir) + (*iq) << " ";
							ans.push_back((*is) + (*ir) + (*iq));
						}
					}
				}
				else {
					//cout << (*is) + (*ir) << " ";
					ans.push_back((*is) + (*ir));
				}
			}
		}
		else {
			//cout << (*is) << " ";
			ans.push_back((*is));
		}

	}
	return ans;

    }
};
/*2*/
