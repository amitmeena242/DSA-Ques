#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices , int n) {
  int profit = 0, minPrice = INT_MAX;
	for(int i = 0; i < n; i++) {
		minPrice = min(minPrice, prices[i]);
		profit = max(profit, prices[i] - minPrice);
	}
	return profit;
} 


int main(){
     vector<int> prices = {7, 1, 5, 3, 6, 4};
     int ans = maxProfit(prices, sizeof(prices) / sizeof(prices[0]));
     cout<<ans<<endl;
     return 0;
}
