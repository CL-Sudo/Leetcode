def search (nums,target):
    L = 0
    R = len(nums) - 1

    while L <= R:
        mid = (L + R) // 2
        if (nums[mid] == target):
            return mid
        if (target < nums[0]) == (nums[mid] < nums[0]):
            num = nums[mid]
        else:
            if (target < nums[0]):
                num = -float('inf')
            else:
                num = float('inf')
        
        if target > num:
            L = mid + 1
        elif target < num:
            R = mid - 1
        else:
            return mid
    return -1

nums = [3]
target = 1
print(search(nums,target))