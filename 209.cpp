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
//		//����̽������Ԫ�ؼ��������ܺ�
//		sum += nums[R];
//		//�������֮���Ѿ�����Ŀ��ֵ���Ҽ�ȥ��ָ��ָ���Ԫ�ص�ֵ�Դ���Ŀ��ֵ��������ָ�������ƶ�����С����ķ�Χ
//		//ȷ������֮����������ʱ���������
//		while (sum - nums[L] >= target)
//		{
//			sum -= nums[L];
//			L++;
//		}
//		//��������֮���Ƿ������������õ����䷶Χ
//		if (sum >= target)
//		{
//			min = min > R - L + 1 ? R - L + 1 : min;
//		}
//	}
//	return min == INT_MAX ? 0 : min;
//}
