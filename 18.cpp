//#include <iostream>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//vector<vector<int>> fourSum(vector<int>& nums, int target);
//
//int main()
//{
//
//	vector<int> nums{ 0,0,0,1000000000,1000000000,1000000000,1000000000 };
//	vector<vector<int>> res = fourSum(nums, 1000000000);
//	return 0;
//}
//
//vector<vector<int>> fourSum(vector<int>& nums, int target)
//{
//	sort(nums.begin(), nums.end());
//	vector<vector<int>> res;
//	int left, right;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		//剪枝处理
//		if (nums[i] > target && nums[i] > 0)
//		{
//			break;
//		}
//		//去重处理
//		if (i > 0 && nums[i] == nums[i - 1])
//		{
//			continue;
//		}
//		for (int j = i + 1; j < nums.size(); j++)
//		{
//			//剪枝处理
//			if (nums[i] + nums[j] > target && nums[j] > 0)
//			{
//				break;
//			}
//			//去重处理
//			if (j > i + 1 && nums[j] == nums[j - 1])
//			{
//				continue;
//			}
//			left = j + 1;
//			right = nums.size() - 1;
//			while (left < right)
//			{
//				if ((long)nums[i] + nums[j] + nums[left] + nums[right] < target)
//				{
//					left++;
//				}
//				else if ((long)nums[i] + nums[j] + nums[left] + nums[right] > target)
//				{
//					right--;
//				}
//				else
//				{
//					res.push_back(vector<int>{nums[i], nums[j], nums[left], nums[right]});
//					//对两个指针指向的值去重
//					while (left < right && nums[left] == nums[left + 1])
//					{
//						left++;
//					}
//					while (left < right && nums[right] == nums[right - 1])
//					{
//						right--;
//					}
//					left++;
//					right--;
//				}
//			}
//		}
//	}
//	return res;
//}
