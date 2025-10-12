class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        low=1
        n=len(nums)
        right=n-2
        if n==1:
            return 0
        if n>1 and nums[0]>nums[1]:
            return 0
        if n>1 and nums[n-1]>nums[n-2]:
            return n-1
        while low<=right:
            mid =(low+right)//2
            if nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]:
                return mid
            elif nums[mid]>nums[mid-1]:
                #increasing slope from mid-1 to mid => peak will be on right part
                low = mid+1
            else:
                #decreasing slope from mid-1 to mid => peak will on left part 
                right = mid-1

        return 0
        