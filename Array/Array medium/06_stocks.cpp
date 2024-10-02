#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    // Brute

    // int n = prices.size();
    // int maxProfit = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int profit = 0;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         profit = prices[j] - prices[i];
    //         maxProfit = max(profit, maxProfit);
    //     }
    // }

    // if (maxProfit > 0)
    //     return maxProfit;

    // return 0;

    // Optimal

    int profit = 0;
    int mini = prices[0];

    for (int i = 0; i < prices.size(); i++)
    {

        int cost = prices[i] - mini;

        profit = max(profit, cost);

        mini = min(prices[i], mini);
    }

    return profit;
}

int main()
{
    vector<int> v1 = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(v1) << endl;

    vector<int> v2 = {7, 6, 4, 3, 1};
    cout << maxProfit(v2) << endl;

    return 0;
}