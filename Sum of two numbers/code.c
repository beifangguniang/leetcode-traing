/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target) {
    int *a = (int*)malloc(2*sizeof(int));
    for(int i = 0;i<numsSize;i++)//第一层循环从数组开头开始遍历nums[i] 开始i=0
    {
        for(int j = i+1;(j<numsSize && j != i);j++)//第二层循环nums[i+1]下一个元素
        {
            if(nums[i] + nums[j] == target)//满足题中给出条件即返回
            {
                a[0] = i;
                a[1] = j;
            }
        }
    }
    return a;//返回a指针
}