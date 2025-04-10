//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<vector<int>> generateMatrix(int n);
//void insertMatrix(vector<vector<int>>& arr, int tR, int tC, int dR, int dC, int& times);
//
//int main()
//{
//	int n = 3;
//	vector<vector<int>> matrix = generateMatrix(n);
//
//	return 0;
//}
//
////对于这道题来说，可以将矩形从外到内一圈一圈的来填充，每一个圈可以由左上顶点和右下顶点来确定。
//vector<vector<int>> generateMatrix(int n)
//{
//	vector<vector<int>>* arr = new vector<vector<int>>(n, vector<int>(n, 0));
//	//最开始两个顶点的坐标
//	int tR = 0;
//	int tC = 0;
//	int dR = n - 1;
//	int dC = n - 1;
//
//	int times = 1;
//
//	while (tR <= dR && tC <= dC)
//	{
//		insertMatrix(*arr, tR, tC, dR, dC, times);
//		tR++;
//		tC++;
//		dR--;
//		dC--;
//	}
//
//	return *arr;
//}
//
//void insertMatrix(vector<vector<int>>& arr, int tR, int tC, int dR, int dC, int& times)
//{
//	//纵坐标相同时（同行）
//	if (tC == dC)
//	{
//		//此时仅剩一行，从左到右依次填入值即可
//		for (int i = tC; i <= dC; i++)
//		{
//			arr[tR][i] = times++;
//		}
//	}
//	//横坐标相同（同列）
//	else if (tR == dR)
//	{
//		for (int i = tR; i <= dR; i++)
//		{
//			arr[i][tC] = times++;
//		}
//	}
//	else
//	{
//		//环状情况，由四个过程组成
//		//上边：从左往右到右边界的前一个位置
//		for (int i = tC; i < dC; i++)
//		{
//			arr[tR][i] = times++;
//		}
//		//右边：从上往下到下边界的前一个位置
//		for (int i = tR; i < dR; i++)
//		{
//			arr[i][dC] = times++;
//		}
//		//下边：从右往左到左边界的前一个位置
//		for (int i = dC; i > tC; i--)
//		{
//			arr[dR][i] = times++;
//		}
//		//左边：从下往上到上边界的前一个位置
//		for (int i = dR; i > tR; i--)
//		{
//			arr[i][tC] = times++;
//		}
//	}
//
//}
//
