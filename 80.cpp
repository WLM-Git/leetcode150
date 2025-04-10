//#include<iostream>
//using namespace std;
//#include<vector>
//
//int removeDuplicates(vector<int>& nums);
//
//int main()
//{
//	vector<int> nums = { 1,1,1,2,2,3 };
//	int res = removeDuplicates(nums);
//	cout << res;
//	return 0;
//}
//
//int removeDuplicates(vector<int>& nums)
//{
//	if (nums.size() < 3)
//	{
//		return nums.size();
//	}
//	int num = 0;
//	for (int i = 2; i < nums.size() - num; i++)
//	{
//		if (nums.at(i) == nums.at(i - 1) && nums.at(i) == nums.at(i - 2))
//		{
//			for (int j = i; j < nums.size() - 1; j++)
//			{
//				nums.at(j) = nums.at(j + 1);
//			}
//			num++;
//		}
//	}
//	for (int i = nums.size() - 1; i > nums.size() - num - 1; i--)
//	{
//		nums.at(i) = 0;
//	}
//	return nums.size() - num;
//}
