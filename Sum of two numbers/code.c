/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target) {
    int *a = (int*)malloc(2*sizeof(int));
    for(int i = 0;i<numsSize;i++)//��һ��ѭ�������鿪ͷ��ʼ����nums[i] ��ʼi=0
    {
        for(int j = i+1;(j<numsSize && j != i);j++)//�ڶ���ѭ��nums[i+1]��һ��Ԫ��
        {
            if(nums[i] + nums[j] == target)//�������и�������������
            {
                a[0] = i;
                a[1] = j;
            }
        }
    }
    return a;//����aָ��
}