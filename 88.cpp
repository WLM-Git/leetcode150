//#include<iostream>
//#include<vector>
//using namespace std;
//
//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
//
//int main()
//{
//	vector<int> arr1{1};
//	vector<int> arr2{};
//
//	merge(arr1, arr1.size() - arr2.size(), arr2, arr2.size());
//	for (size_t i = 0; i < arr1.size(); i++)
//	{
//		cout << arr1.at(i) << " ";
//	}
//	return 0;
//}
//
//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
//{
//	vector<int> nums3(m + n);
//	if (m > 0 && n > 0)
//	{
//		int p = 0, q = 0;
//		for (int i = 0; i < m + n; i++)
//		{
//
//			if (p != m && q != n)
//			{
//				if (nums1[p] <= nums2[q])
//				{
//					nums3.at(i) = nums1.at(p);
//					p++;
//				}
//				else
//				{
//					nums3.at(i) = nums2.at(q);
//					q++;
//				}
//			}
//			else if(p == m && q != n)
//			{
//				nums3.at(i) = nums2.at(q);
//				q++;
//			}
//			else if(p != m && q == n)
//			{
//				nums3.at(i) = nums1.at(p);
//				p++;
//			}
//		}
//		for (int i = 0; i < m + n; i++)
//		{
//			nums1.at(i) = nums3.at(i);
//		}
//	}
//	else if (m == 0 && n != 0)
//	{
//		for (size_t i = 0; i < n; i++)
//		{
//			nums1.at(i) = nums2.at(i);
//		}
//	}
//	else
//	{
//		for (size_t i = 0; i < m; i++)
//		{
//			nums1.at(i) = nums1.at(i);
//		}
//	}
//}
