//#include<iostream>
//#include<vector>
//using namespace std;
//
//void intervalsSum();
//
//int main()
//{
//	intervalsSum();
//	
//	return 0;
//}
//
//void intervalsSum()
//{
//	int n;
//	cin >> n;
//	int a, b;
//	vector<int> arr(n);
//	vector<int> prefixArr(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	//生成前缀数组
//	prefixArr[0] = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 0)
//		{
//			prefixArr[i] = arr[i];
//		}
//		else
//		{
//			prefixArr[i] = arr[i] + prefixArr[i - 1];
//		}
//	}
//
//	while (cin >> a >> b)
//	{
//		if (a == 0)
//		{
//			cout << prefixArr[b] << endl;
//		}
//		else
//		{
//			cout << prefixArr[b] - prefixArr[a - 1] << endl;
//		}
//	}
//}
