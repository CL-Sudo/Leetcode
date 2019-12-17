def maxProfit(prices):
    lowest = float('inf')
    profit = 0
    prices.append(-float('inf'))
    for i in range(0,len(prices)-1):
        if prices[i] < lowest:
            lowest = prices[i]
        
        elif prices[i]>=prices[i-1] and prices[i] >= prices[i+1]:
            profit += prices[i] - lowest
            print(prices[i]-lowest)
            lowest = float('inf')
    
    return profit
        
prices = [5,2,3,2,6,6,2,9,1,0,7,4,5,0]
print(maxProfit(prices))