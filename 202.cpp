//#include <iostream>
//#include <unordered_set>
//using namespace std;
//
//bool isHappy(int n);
//
//int main()
//{
//	bool res = isHappy(19);
//	return 0;
//}
//
//bool isHappy(int n)
//{
//	int sum = 0;
//	unordered_set<int> set;
//	//���ĳ����֮ǰ��δ���ֹ������Ǿ��������г���
//	while (set.count(n) == 0)
//	{
//		if (sum == 0)
//		{
//			set.insert(n);
//		}
//		sum += (n % 10) * (n % 10);
//		n = n / 10;
//		if (n == 0)
//		{
//			if (sum == 1)
//			{
//				return true;
//			}
//			n = sum;
//			sum = 0;
//		}
//	}
//	return false;
//}
