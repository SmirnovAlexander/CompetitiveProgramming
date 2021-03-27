from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        sum = 0
        buy_ability = 1

        if len(prices) <= 1:
            return sum

        # iterating till the one
        # before end
        for i in range(len(prices) - 2):

            cur_price = prices[i]
            next_price = prices[i + 1]
            next_next_price = prices[i + 2]
            
            if buy_ability:
                if cur_price < next_price:
                    buy_ability = 0
                    buy_price = cur_price
                    sum += cur_price
            else:
                diff1 = next_price - cur_price
                if next_price > cur_price:
                    buy_ability = 1
                    sum += cur_price


        # handling last



        return sum


prices = [1, 2, 3, 4, 5]
print(Solution().maxProfit(prices)) 
