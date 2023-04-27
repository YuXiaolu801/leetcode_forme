class Solution {
public:
    int mySqrt(int x) {
        long i = 0;
	    for (i = 0; i * i <= x && i * i >= 0; i++);
	    return --i;     
    }
};
