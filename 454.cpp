//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4);
//
//int main()
//{
//
//	return 0;
//}
//
//int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4)
//{
//	unordered_map<int, int> map;
//	int count = 0;
//	
//	for (int i = 0; i < nums1.size(); i++)
//	{
//		for (int j = 0; j < nums2.size(); j++)
//		{
//			map[nums1[i] + nums2[j]]++;
//		}
//	}
//
//	for (int i = 0; i < nums3.size(); i++)
//	{
//		for (int j = 0; j < nums4.size(); j++)
//		{
//			if (map.count(-nums3[i] - nums4[j]) != 0)
//			{
//				count += map[-nums3[i] - nums4[j]];
//			}
//		}
//	}
//
//	return count;
//}
