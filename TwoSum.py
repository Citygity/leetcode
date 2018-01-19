# -*- coding: utf-8 -*-
"""
Created on Thu Jan 18 21:29:48 2018

@author: rayshea
"""

# =============================================================================
# Given an array of integers, return indices of the two numbers such that they add up to a specific target.
# 
# You may assume that each input would have exactly one solution, and you may not use the same element twice.
# =============================================================================
class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        data=[]
        data=sorted(nums)
        x=0
        y=0
        #data.sort()
        for i in range(0,len(data)-1):
            for j in range(i+1,len(data)):
                if(data[i]+data[j]<=target):
                    if(data[i]+data[j]==target):
                        
                        if(data[i]==data[j]):
                            x=nums.index(data[i])
                            nums[x]=-1
                            y=nums.index(data[j])
                        else:
                            x=nums.index(data[i])
                            y=nums.index(data[j])
                        return [x,y]
                        
                else:
                    break