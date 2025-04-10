//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//vector<int> twoSum_baoli(vector<int>& nums, int target);
//vector<int> twoSum(vector<int>& nums, int target);
//
//int main()
//{
//
//	return 0;
//}
//
//vector<int> twoSum_baoli(vector<int>& nums, int target)
//{
//	vector<int> res;
//	for (int i = 0; i < nums.size() - 1; i++)
//	{
//		for (int j = i + 1; j < nums.size(); j++)
//		{
//			if (nums[i] + nums[j] == target)
//			{
//				res.push_back(i);
//				res.push_back(j);
//				return res;
//			}
//		}
//	}
//	return res;;
//}
//
//vector<int> twoSum(vector<int>& nums, int target)
//{
//	vector<int> res;
//	unordered_map<int, int> map;
//	
//	for (int i = 0; i < nums.size(); i++)
//	{
//		map.insert(pair<int, int>(nums[i], i));
//	}
//
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (map.count(target - nums[i]) != 0 && map[target - nums[i]] != i)
//		{
//			res.push_back(i);
//			res.push_back(map[target - nums[i]]);
//			return res;
//		}
//	}
//	return res;
//}
