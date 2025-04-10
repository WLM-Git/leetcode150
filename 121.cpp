//#include<iostream>
//using namespace std;
//#include<vector>
//
//int maxProfit(vector<int>& prices);
//int maxProfit_tx(vector<int>& prices);
//
//int main()
//{
//
//	return 0;
//}
//
//int maxProfit(vector<int>& prices)
//{
//	int max_profit = 0;
//	for (int i = 0; i < prices.size() - 1; i++)
//	{
//		for (int j = i + 1; j < prices.size(); j++)
//		{
//			if (prices[i] >= prices[j])
//			{
//				continue;
//			}
//			max_profit = (prices[j] - prices[i]) > max_profit ? prices[j] - prices[i] : max_profit;
//		}
//	}
//	return max_profit;
//}
//
//int maxProfit_tx(vector<int>& prices)
//{
//	int min_value = INT16_MAX;
//	int max_profit = 0;
//	for (int i = 0; i < prices.size(); i++)
//	{
//		min_value = prices[i] < min_value ? prices[i] : min_value;
//		max_profit = max(max_profit, prices[i] - min_value);
//	}
//	
//	return max_profit;
//}
