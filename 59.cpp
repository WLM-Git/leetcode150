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
////�����������˵�����Խ����δ��⵽��һȦһȦ������䣬ÿһ��Ȧ���������϶�������¶�����ȷ����
//vector<vector<int>> generateMatrix(int n)
//{
//	vector<vector<int>>* arr = new vector<vector<int>>(n, vector<int>(n, 0));
//	//�ʼ�������������
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
//	//��������ͬʱ��ͬ�У�
//	if (tC == dC)
//	{
//		//��ʱ��ʣһ�У���������������ֵ����
//		for (int i = tC; i <= dC; i++)
//		{
//			arr[tR][i] = times++;
//		}
//	}
//	//��������ͬ��ͬ�У�
//	else if (tR == dR)
//	{
//		for (int i = tR; i <= dR; i++)
//		{
//			arr[i][tC] = times++;
//		}
//	}
//	else
//	{
//		//��״��������ĸ��������
//		//�ϱߣ��������ҵ��ұ߽��ǰһ��λ��
//		for (int i = tC; i < dC; i++)
//		{
//			arr[tR][i] = times++;
//		}
//		//�ұߣ��������µ��±߽��ǰһ��λ��
//		for (int i = tR; i < dR; i++)
//		{
//			arr[i][dC] = times++;
//		}
//		//�±ߣ�����������߽��ǰһ��λ��
//		for (int i = dC; i > tC; i--)
//		{
//			arr[dR][i] = times++;
//		}
//		//��ߣ��������ϵ��ϱ߽��ǰһ��λ��
//		for (int i = dR; i > tR; i--)
//		{
//			arr[i][tC] = times++;
//		}
//	}
//
//}
//
