//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void rotate(vector<int>& nums, int k);
//void rotatePro(vector<int>& nums, int k);
//void reverse(vector<int>& nums, int start, int end);
//
//
//int main()
//{
//	vector<int> nums = { 1,2,3,4,5,6,7 };
//	rotatePro(nums, 3);
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		cout << nums[i] << " " << endl;
//	}
//	return 0;
//}
//
//void rotate(vector<int>& nums, int k)
//{
//	vector<int> temp(nums.size());
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		if (i + k >= nums.size())
//		{
//			temp[(i + k) % nums.size()] = nums[i];
//		}
//		else
//		{
//			temp[i + k] = nums[i];
//		}
//	}
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		nums[i] = temp[i];
//	}
//}
//
//void rotatePro(vector<int>& nums, int k)
//{
//	int n = nums.size();
//	if (n == 0 || k == 0)
//	{
//		return;
//	}
//	k = k % n;
//	reverse(nums, 0, n - 1);
//	reverse(nums, 0, k - 1);
//	reverse(nums, k, n - 1);
//}
//
//void reverse(vector<int>& nums, int start, int end)
//{
//	int tmp;
//	while (start < end)
//	{
//		tmp = nums[start];
//		nums[start] = nums[end];
//		nums[end] = tmp;
//		start++;
//		end--;
//	}
//}
