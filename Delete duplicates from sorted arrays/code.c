int removeDuplicates(int* nums, int numsSize) 
{
    if(numsSize==0)//��ʼ��
    {
        return 0;//�������Ԫ�ظ�����Ϊ0
    }
    int length = 1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=nums[length-1])//����ҵ���Ƚ�Ԫ�ز�ͬ��Ԫ��
        {
            nums[length++]=nums[i];//�򽫸�Ԫ�ظ��Ƶ������һ��Ԫ���У�������������ֵk��1
        }
    }
    return length;//��������Ԫ�س���
}