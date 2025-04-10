//#include<iostream>
//#include<vector>
//using namespace std;
//
//int minSubArrayLen(int target, vector<int>& nums);
//
//int main()
//{
//	vector<int> arr{ 1,1,1,1,1,1,1,1 };
//	cout << minSubArrayLen(11, arr);
//	return 0;
//}
//
//int minSubArrayLen(int target, vector<int>& nums)
//{
//	int L = 0;
//	int R = 0;
//
//	int sum = 0;
//	int min = INT_MAX;
//	
//	for (R; R < nums.size(); R++)
//	{
//		//将新探索到的元素加入区间总和
//		sum += nums[R];
//		//如果区间之和已经大于目标值，且减去左指针指向的元素的值仍大于目标值，则让左指针向右移动，减小区间的范围
//		//确保区间之和满足条件时，区间最短
//		while (sum - nums[L] >= target)
//		{
//			sum -= nums[L];
//			L++;
//		}
//		//根据区间之和是否满足条件来得到区间范围
//		if (sum >= target)
//		{
//			min = min > R - L + 1 ? R - L + 1 : min;
//		}
//	}
//	return min == INT_MAX ? 0 : min;
//}
