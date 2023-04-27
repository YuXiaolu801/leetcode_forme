/*method1:
*/
class Solution {
public:
    int reverse(int x) {
    long long y = (long)x,n=0;
	while (y != 0) {
		n = n * 10 + y % 10;
		y = y / 10;
	}
	return n> 2147483648||n<-2147483648?0:n;
}
};
/*method2:
*/
class Solution {
public:
    int reverse(int x) {
        long n = 0;
        while(x != 0) {
            n = n*10 + x%10;
            x = x/10;
        }
        return (int)n==n? (int)n:0;
    }
};
