//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<int> sortedSquares(vector<int>& nums);
//
//int main()
//{
//
//	return 0;
//}
//
//vector<int> sortedSquares(vector<int>& nums)
//{
//	if (nums.size() == 1)
//	{
//		nums[0] = nums[0] * nums[0];
//		return nums;
//	}
//
//	vector<int> arr(nums.size());
//	int p = 0;
//	int q = nums.size() - 1;
//	int r = nums.size() - 1;
//	for (p; p <= q; p++)
//	{
//		if (nums[p] * nums[p] > nums[q] * nums[q])
//		{
//			arr[r] = nums[p] * nums[p];
//		}
//		else
//		{
//			arr[r] = nums[q] * nums[q];
//			p--;
//			q--;
//		}
//		r--;
//	}
//	for (int i = 0; i < nums.size(); i++)
//	{
//		nums[i] = arr[i];
//	}
//
//	return nums;
//}
