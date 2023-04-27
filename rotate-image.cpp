class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
	//先上下翻转
	for (int i = 0; i < matrix.size()/2; i++)
	{
		matrix[i].swap(matrix[matrix.size() - i - 1]);//用swap方法比temp好多了
	}
	//再对角反转
	for (int i = 0; i < matrix.size() ; i++)
	{
		for (int j = i; j < matrix.size() ; j++) {//找三角内循环的起点不是0！！！！
			swap(matrix[i][j] , matrix[j][i]);
		}
	}
    }
};
