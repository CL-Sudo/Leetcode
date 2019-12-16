def maxProfit(prices):
    max = 0
    lowestPrice = float('inf')
    
    for price in prices:
        if price - lowestPrice > max:
            max = price - lowestPrice       
        if price < lowestPrice:
            lowestPrice = price
    return max

prices = [7,6,4,3,1]
print(maxProfit(prices))