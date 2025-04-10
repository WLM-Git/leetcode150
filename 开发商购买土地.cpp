//#include<iostream>
//#include<vector>
//using namespace std;
//
//void slove();
//
//int main()
//{
//	slove();
//	return 0;
//}
//
//void slove()
//{
//	int n, m, min = INT_MAX, diff_sum = 0,diff_tow_part;
//	cin >> n >> m;
//	vector<vector<int>> arr(n, vector<int>(m, 0));
//	vector<vector<int>> prefixArr_H(n, vector<int>(m, 0));
//	vector<vector<int>> prefixArr_V(n, vector<int>(m, 0));
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	//横向前缀表
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (i == 0 && j == 0)
//			{
//				prefixArr_H[i][j] = arr[i][j];
//			}
//			else
//			{
//				if (j == 0)
//				{
//					prefixArr_H[i][j] = prefixArr_H[i - 1][m - 1] + arr[i][j];
//				}
//				else
//				{
//					prefixArr_H[i][j] = prefixArr_H[i][j - 1] + arr[i][j];
//				}
//
//			}
//		}
//	}
//	//纵向前缀表
//	for (int j = 0; j < m; j++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (i == 0 && j == 0)
//			{
//				prefixArr_V[i][j] = arr[i][j];
//			}
//			else
//			{
//				if (i == 0)
//				{
//					prefixArr_V[i][j] = prefixArr_V[n - 1][j - 1] + arr[i][j];
//				}
//				else
//				{
//					prefixArr_V[i][j] = prefixArr_V[i - 1][j] + arr[i][j];
//				}
//			}
//		}
//	}
//
//	//横分
//	for (int i = 0; i < n - 1; i++)
//	{
//		diff_sum = prefixArr_H[n - 1][m - 1] - prefixArr_H[i][m - 1];
//		diff_tow_part = prefixArr_H[i][m - 1] - diff_sum;
//		diff_tow_part = abs(diff_tow_part);
//		min = diff_tow_part <= min ? diff_tow_part : min;
//	}
//	
//	//竖分
//	for (int j = 0; j < m - 1; j++)
//	{
//		diff_sum = prefixArr_V[n - 1][m - 1] - prefixArr_V[n - 1][j];
//		diff_tow_part = prefixArr_V[n - 1][j] - diff_sum;
//		diff_tow_part = abs(diff_tow_part);
//		min = diff_tow_part <= min ? diff_tow_part : min;
//	}
//	cout << min;
//}
