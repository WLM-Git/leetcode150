//#include <iostream>
//#include <vector>
//#include <unordered_set>
//using namespace std;
//
//vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
//
//int main()
//{
//
//	return 0;
//}
//
//vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
//{
//	vector<int> res;
//	unordered_set<int> set_1;
//	unordered_set<int> set_2;
//	for (int i = 0; i < nums1.size(); i++)
//	{
//		set_1.insert(nums1[i]);
//	}
//	for (int i = 0; i < nums2.size(); i++)
//	{	
//		set_2.insert(nums2[i]);
//	}
//	
//	unordered_set<int>::iterator it;
//	for (it = set_1.begin(); it != set_1.end(); it++)
//	{
//		if (set_2.count(*it))
//		{
//			res.push_back(*it);
//		}
//	}
//
//	return res;
//}
