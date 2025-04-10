//#include<iostream>
//using namespace std;
//#include<vector>
//
//int removeDuplicates(vector<int>& nums);
//
//int main()
//{
//
//	return 0;
//}
//
//int removeDuplicates(vector<int>& nums)
//{
//	vector<int> nums_temp(nums.size());
//	int num = 0;
//	nums_temp.at(0) = nums.at(0);
//	for (size_t i = 1; i < nums.size(); i++)
//	{
//		if (nums.at(i) == nums.at(i - i))
//		{
//			num++;
//		}
//		else
//		{
//			nums_temp.at(i - num) = nums.at(i);
//		}
//	}
//	
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		nums.at(i) = nums_temp.at(i);
//	}
//	return nums.size() - num;
//}
