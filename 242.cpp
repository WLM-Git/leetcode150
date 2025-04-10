//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool isAnagram(string s, string t);
//
//
//int main()
//{
//
//	return 0;
//}
//
//bool isAnagram(string s, string t)
//{
//	vector<int> arr(26);
//	
//	for (int i = 0; i < s.length(); i++)
//	{
//		arr[s.at(i) - 'a']++;
//	}
//
//	for (int i = 0; i < t.length(); i++)
//	{
//		arr[t.at(i) - 'a']--;
//	}
//
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (arr[i] != 0)
//		{
//			return false;
//		}
//	}
//	
//	return true;
//}
