# -*- coding:utf-8 -*-
#point to offer 3
class Solution:
    # 这里要特别注意~找到任意重复的一个值并赋值到duplication[0]
    # 函数返回True/False
    def duplicate(self, numbers, duplication):
        # write code here
        if len(numbers)==0:
            return False
        numbers.sort()
        FLAG = True
        for i,num in enumerate(numbers):
            if i == 0 :
                continue
            else:
                if FLAG:
                    if(num==numbers[i-1]):
                        duplication[0]=num
                        return True
        return False
