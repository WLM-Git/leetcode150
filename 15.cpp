//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<vector<int>> threeSum(vector<int>& nums);
//
//int main()
//{
//
//	return 0;
//}
//
//vector<vector<int>> threeSum(vector<int>& nums)
//{
//	//将数组从小到大排序
//	sort(nums.begin(), nums.end());
//	vector<vector<int>> res;
//
//	int left, right;
//
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (nums[i] > 0)
//		{
//			return res;
//		}
//		if (i > 0 && nums[i] == nums[i - 1])
//		{
//			continue;
//		}
//		left = i + 1;
//		right = nums.size() - 1;
//		
//		while (left < right)
//		{
//			if (nums[i] + nums[left] + nums[right] < 0)
//			{
//				left++;
//			}
//			else if (nums[i] + nums[left] + nums[right] > 0)
//			{
//				right--;
//			}
//			else
//			{
//				res.push_back(vector<int>{nums[i], nums[left], nums[right]});
//				
//				while (left < right && nums[left] == nums[left + 1])
//				{
//					left++;
//				}
//				while (left < right && nums[right] == nums[right - 1])
//				{
//					right--;
//				}
//				left++;
//				right--;
//			}
//		}
//	}
//	return res;
//}
