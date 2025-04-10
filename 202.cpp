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
//	//如果某个数之前从未出现过，我们就让它进行尝试
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
