//#include<iostream>
//using namespace std;
//#include<vector>
//#include<map>
//#include<algorithm>
//
//int majorityElement(vector<int>& nums);
//int majorityElementBoyerMoore(vector<int>& nums);
//
//int main()
//{
//	vector<int> array = { 2,2,1,1,1,2,2 };
//	cout << majorityElementBoyerMoore(array);
//	return 0;
//}
//
//int majorityElement(vector<int>& nums)
//{
//	map<int, int> Table;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		Table[nums.at(i)]++;
//	}
//
//	auto max = Table.begin();
//	for (auto i = Table.begin(); i != Table.end(); i++)
//	{
//		if (i->second > max->second)
//		{
//			max = i;
//		}
//	}
//	return max->first;
//}
//
//int majorityElementBoyerMoore(vector<int>& nums)
//{
//	int candidate;
//	int count = 0;
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		if (count > 0)
//		{
//			if (candidate == nums[i])
//			{
//				count++;
//			}
//			else
//			{
//				count--;
//			}
//		}
//		else
//		{
//			candidate = nums.at(i);
//			count++;
//		}
//	}
//	return candidate;
//}
//
