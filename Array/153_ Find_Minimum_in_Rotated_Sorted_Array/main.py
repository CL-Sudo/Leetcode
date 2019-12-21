def findMin(nums):
    L = 0
    R = len(nums) - 1

    if nums[L] < nums[R]:
        return nums[L]
    
    elif R == 0:
            return nums[0]

    while L < R:
        mid = (L + R) // 2
        print(mid)
        if nums[mid] < nums[mid - 1]:
            return nums[mid]
        
        if nums[mid] > nums[mid + 1]:
            return nums[mid + 1]

        if nums[mid] > nums[0]:
            L = mid
        
        else:
            R = mid

nums = [1,2,3,4,5,0]
print(findMin(nums))