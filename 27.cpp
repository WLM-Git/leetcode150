//#include<iostream>
//using namespace std;
//#include<vector>
//
//int removeElement(vector<int>& nums, int val);
//
//int removeElementNew(vector<int>& nums, int val);
//
//int removeElementFS(vector<int>& nums, int val);
//
//void swap(vector<int>& nums, int l, int r);
//
//int main()
//{
//
//	vector<int> nums = { 3,3 };
//	int val = 3;
//
//	cout << removeElementNew(nums, val) << endl;
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		cout << nums.at(i) << " ";
//	}
//
//	return 0;
//}
//
//int removeElement(vector<int>& nums, int val)
//{
//	vector<int> nums_tmp(nums.size());
//	int num = 0;
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		if (nums.at(i) != val)
//		{
//			nums_tmp.at(i - num) = nums.at(i);
//		}
//		else
//		{
//			num++;
//		}
//	}
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		nums.at(i) = nums_tmp.at(i);
//	}
//	return nums.size() -  num;
//}
//
//int removeElementNew(vector<int>& nums, int val)
//{
//	int size = nums.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	
//	int n = 0;		//等于val的个数
//	int q = size - 1;
//	for (int p = 0; p < size - n; p++)
//	{
//		if (p < q)
//		{
//			if (nums[p] == val)
//			{
//				n++;
//				while (nums[q] == val && p < q)
//				{
//					n++;
//					q--;
//				}
//				swap(nums, p, q);
//				q--;
//			}
//		}
//		else
//		{
//			if (p == q && nums[p] == val)
//			{
//				n++;
//			}
//			break;
//		}
//
//	}
//	
//	return size - n;
//}
//
//int removeElementFS(vector<int>& nums, int val)
//{
//	int size = nums.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//
//	int fast = 0;
//	int slow = 0;
//	int num = 0;
//	for (fast; fast < size; fast++)
//	{
//		if (nums[fast] != val)
//		{
//			nums[slow] = nums[fast];
//			slow++;
//			num++;
//		}
//	}
//
//	return num;
//}
//
//void swap(vector<int>& nums, int l, int r)
//{
//	int tmp = nums[r];
//	nums[r] = nums[l];
//	nums[l] = tmp;
//}
