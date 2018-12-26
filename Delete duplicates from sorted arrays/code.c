int removeDuplicates(int* nums, int numsSize) 
{
    if(numsSize==0)//初始化
    {
        return 0;//输出数组元素个数则为0
    }
    int length = 1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=nums[length-1])//如果找到与比较元素不同的元素
        {
            nums[length++]=nums[i];//则将该元素复制到数组的一个元素中，并且数组索引值k加1
        }
    }
    return length;//返回数组元素长度
}