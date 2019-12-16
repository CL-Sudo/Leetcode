def containsDuplicate(nums):
    return len(nums) != len(set(nums))

nums = [1,2,3,1]
if containsDuplicate(nums) == True:
    print("True")

else:
    print("False")