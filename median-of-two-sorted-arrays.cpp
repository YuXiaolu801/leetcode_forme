class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        	multiset<int>s;
	for (vector<int>::iterator it = nums1.begin(); it !=nums1.end(); it++)
	{
		s.insert(*it);
	}
	for (vector<int>::iterator it = nums2.begin(); it != nums2.end(); it++)
	{
		s.insert(*it);
	}
	int mid = 0;
    double sum=0;
	multiset<int>::iterator it = s.begin();
	if (s.size() % 2 != 0) {
		for (it = s.begin(); mid != s.size() / 2; it++, mid++);
		sum=double(*it);
	}
	if (s.size() % 2 == 0) {
		for (it = s.begin();it!=s.end()&& mid < (s.size() / 2)-1; it++, mid++);
		int m1 = *(it);
		int m2 = *(++it);
		sum=double(m1+m2)/2;
	}    
    return sum;
    }
};
