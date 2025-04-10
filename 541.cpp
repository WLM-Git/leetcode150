//#include <iostream>
//#include <string>
//using namespace std;
//
//string reverseStr(string s, int k);
//
//int main()
//{
//	string s = "krmyfshbspcgtesxnnljhfursyissjnsocgdhgfxubewllxzqhpasguvlrxtkgatzfybprfmmfithphckksnvjkcvnsqgsgosfxc";
//	string res = reverseStr(s, 20);
//	cout << res;
//	return 0;
//}
//
//string reverseStr(string s, int k)
//{
//	int len = s.length();
//	int shengyu = len;
//	int left, right;
//	int tmp;
//	while (shengyu >= 2 * k)
//	{
//		left = len - shengyu;
//		right = left + k - 1;
//		while (left < right)
//		{
//			tmp = s[right];
//			s[right] = s[left];
//			s[left] = tmp;
//			left++;
//			right--;
//		}
//		shengyu -= 2 * k;
//	}
//	if (shengyu < k)
//	{
//		left = len - shengyu;
//		right = len - 1;
//		while (left < right)
//		{
//			tmp = s[right];
//			s[right] = s[left];
//			s[left] = tmp;
//			left++;
//			right--;
//		}
//	}
//	else
//	{
//		left = len - shengyu;
//		right = left + k - 1;
//		while (left < right)
//		{
//			tmp = s[right];
//			s[right] = s[left];
//			s[left] = tmp;
//			left++;
//			right--;
//		}
//	}
//	return s;
//}
