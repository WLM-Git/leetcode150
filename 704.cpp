//#include <iostream>
//#include<vector>
//using namespace std;
//
//int search(vector<int>& nums, int target);
//
//int main()
//{
//	vector<int> arr{ -1,0,3,5,9,12 };
//	cout << search(arr, 9);
//
//	return 0;
//}
//
//int search(vector<int>& nums, int target)
//{
//	if (nums.size() == 0)
//	{
//		return -1;
//	}
//
//	int left = 0;
//	int right = nums.size() - 1;
//	
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (nums[mid] == target)
//		{
//			return mid;
//		}
//		if (nums[mid] > target)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//
//	return -1;
//}
