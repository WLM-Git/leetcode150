//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//bool canConstruct(string ransomNote, string magazine);
//
//int main()
//{
//	string s1 = "aa";
//	string s2 = "abaaa";
//	cout << canConstruct(s1, s2);
//
//	return 0;
//}
//
//bool canConstruct(string ransomNote, string magazine)
//{
//	unordered_map<char, int> map;
//	for (int i = 0; i < magazine.size(); i++)
//	{
//		map[magazine.at(i)]++;
//	}
//
//	for (int i = 0; i < ransomNote.size(); i++)
//	{
//		if (map.count(ransomNote[i]) != 0 && map[ransomNote[i]] > 0)
//		{
//			map[ransomNote[i]]--;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	return true;
//}
